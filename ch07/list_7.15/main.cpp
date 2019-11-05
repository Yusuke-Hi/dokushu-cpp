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

    std::cout << "DerivedA" << std::endl;
    DerivedA& derived_a = more_derived;
    derived_a.method_Base();

    std::cout << std::endl;

    std::cout << "DerivedB" << std::endl;
    DerivedB& derived_b = more_derived;
    derived_b.method_Base();
}