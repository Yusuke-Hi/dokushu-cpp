#include <iostream>

class Base
{
public:
    void method_Base()
    {
        std::cout << "Base: " << this << std::endl;
    }
};

// DerivedA�͉��z���N���X�Ƃ���Base���p������
class DerivedA : virtual public Base
{
public:
    void method_DerivedA()
    {
        std::cout << "DerivedA: " << this << std::endl;
    }
};

// DerivedB�͉��z���N���X�Ƃ���Base���p������
class DerivedB : virtual public Base
{
public:
    void method_DerivedB()
    {
        std::cout << "DerivedB: " << this << std::endl;
    }
};

// DerivedA��DerivedB��Base����h�����Ă��邪�A
// Base�͉��z���N���X�w�肳��Ă���̂�
// MoreDerived�ɂ�Base�͂���1�������݂��Ȃ�
class MoreDerived : public DerivedA, public DerivedB
{
public:
    void method_MoreDerived()
    {
        std::cout << "MoreDerived: " << this << std::endl;
    }
};

int main()
{
    MoreDerived more_derived;

    // �����̃����o�[�֐��͂���܂łǂ��蕁�ʂɌp�������̂ŌĂяo����
    more_derived.method_DerivedA();
    more_derived.method_DerivedB();
    more_derived.method_MoreDerived();
    
    // ���܂ł͞B�����������ABase�͉��z���N���X�Ȃ̂�
    // �B���ɂȂ炸�Ăяo�����Ƃ��ł���
    more_derived.method_Base();
    
    // ��������B���ɂȂ炸Base�̎Q�Ƃ��擾�ł���
    Base& base = more_derived;
}
