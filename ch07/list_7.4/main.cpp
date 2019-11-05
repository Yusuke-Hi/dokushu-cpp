#include <iostream>

class Base
{
public:
    void method_Base();
};

void Base::method_Base()
{
    std::cout << "Base::method_Base()" << std::endl;
}

class Derived : public Base
{
public:
    void method_Derived();
};

void Derived::method_Derived()
{
    std::cout << "Derived::method_Derived()" << std::endl;
}

int main()
{
    Derived derived;

    // OK�BDerived��Base�̃����o�[�֐����p�����Ă���̂ŌĂяo����
    derived.method_Base();
    
    // OK�B�������Derived�̃����o�[�֐����Ăяo����
    derived.method_Derived();
    
    // ���N���X�ւ̎Q�Ƃ͔h���N���X���������
    Base& base = derived;
    
    // OK�BBase�̃����o�[�֐��ւ�Base�̎Q�Ƃ��炽�ǂ邱�Ƃ��ł���
    base.method_Base();
}
