#include <iostream>
#include <typeinfo> // std::bad_cast�ɕK�v

class Base
{
public:
    virtual ~Base() {} // ���z�f�X�g���N�^�[���`���ă|�����[�t�B�b�N�ɂ���

                       // virtual�ł͂Ȃ������o�[�֐�
    const char* get_class_name() const { return "Base"; }
};

class Derived : public Base
{
public:
    const char* get_class_name() const { return "Derived"; }
};

class MoreDerived : public Derived
{
public:
    const char* get_class_name() const { return "MoreDerived"; }
};

int main()
{
    Derived d; // ���ۂ̃I�u�W�F�N�g��Derived�^

    Base& rb = d; // Base�^�ւ̎Q�Ƃɂ���

    // Base�^�ւ̎Q�Ƃ��g���Ă���̂�Base�^�̃����o�[�֐����Ă΂��
    std::cout << rb.get_class_name() << std::endl;

    try
    {
        Derived& rd = dynamic_cast<Derived&>(rb); // Base�^����Derived�^�փL���X�g
    
        // �L���X�g����
        // �Q�Ƃ�Derived�^�Ȃ̂�Derived�^�̃����o�[�֐����Ă΂��
        std::cout << rd.get_class_name() << std::endl;
    }
    catch (std::bad_cast & bc)
    {
        // �L���X�g���s
        // �Q�Ƃł̃L���X�g�Ɏ��s�����ꍇ�Adynamic_cast��std::bad_cast��O�𓊂���
        std::cout << "dynamic_cast���s" << std::endl;
    }

    try
    {
        // ���ۂ̃C���X�^���X�̌^��Derived�^�Ȃ̂ŃL���X�g�͎��s����
        MoreDerived& rmd = dynamic_cast<MoreDerived&>(rb);
    
        std::cout << rmd.get_class_name() << std::endl;
    }
    catch (std::bad_cast & bc)
    {
        std::cout << "dynamic_cast���s" << std::endl;
    }
}
