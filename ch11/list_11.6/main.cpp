#include <iostream>

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

    Base* pb = &d; // Base�^�ւ̃|�C���^�[�ɂ���

                   // Base�^�ւ̃|�C���^�[���g���Ă���̂�Base�^�̃����o�[�֐����Ă΂��
    std::cout << pb->get_class_name() << std::endl;

    Derived* pd = dynamic_cast<Derived*>(pb); // Base�^����Derived�^�փL���X�g

    if (pd)
    {
        // �L���X�g����
        // �|�C���^�[��Derived�^�Ȃ̂�Derived�^�̃����o�[�֐����Ă΂��
        std::cout << pd->get_class_name() << std::endl;
    }
    else
    {
        // �L���X�g���s
        // �|�C���^�[�ł̃L���X�g�Ɏ��s�����ꍇ�Adynamic_cast��nullptr��Ԃ�
        std::cout << "dynamic_cast���s" << std::endl;
    }

    // ���ۂ̃C���X�^���X�̌^��Derived�^�Ȃ̂ŃL���X�g�͎��s����
    MoreDerived* pmd = dynamic_cast<MoreDerived*>(pb);

    if (pmd)
    {
        std::cout << pmd->get_class_name() << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast���s" << std::endl;
    }
}
