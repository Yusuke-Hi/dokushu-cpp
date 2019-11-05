#include <iostream>

class Base
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base
{
public:
    using Base::foo; // ���N���X��foo()���Ăяo����悤�ɂ���

    void foo(int v); // �h���N���X�Œǉ������I�[�o�[���[�h
};

void Derived::foo(int v)
{
    std::cout << "Derived::foo(" << v << ")" << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // ���N���X��foo()���Ă΂��
    derived.foo(42); // �h���N���X�Œǉ������I�[�o�[���[�h���Ă΂��
}
