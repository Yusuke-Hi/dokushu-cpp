#include <iostream>

class Base
{
public:
    virtual void foo();
};

void Base::foo() // ��`�ɂ�virtual�͏����Ȃ�
{
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base
{
public:
    void foo() override; // �h���N���X�Ń����o�[�֐����I�[�o�[���C�h
    //void foo(int i) override; // �G���[�B�Ή����鉼�z�֐������N���X�ɂȂ�
    void foo(int i); // OK�B�P�Ȃ�I�[�o�[���[�h�͒ǉ��ł���
};

void Derived::foo() // ��`�ɂ�override�͏����Ȃ�
{
    std::cout << "Derived::foo() override" << std::endl;
}

void Derived::foo(int i)
{
    std::cout << "Derived::foo(int)" << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // ���z�֐��Ăяo��
    derived.foo(42); // ���z�֐��ł͂Ȃ��I�[�o�[���[�h�̌Ăяo��
}
