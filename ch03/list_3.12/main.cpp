#include <iostream>

class Base // ���ƂȂ�N���X
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "foo()" << std::endl;
}

class Derived : public Base // Base�̃����o�[���p������
{
public:
    void bar(); // �h���N���X�Œǉ������@�\
};

void Derived::bar()
{
    std::cout << "bar()" << std::endl;
}

int main()
{
    Base base;
    base.foo(); // ���N���X��foo���Ă΂��
    // base.bar(); // �G���[�B���N���X�ɂ͔h���N���X�Œǉ�����
                   // �����o�[�͑��݂��Ă��Ȃ��̂ŌĂяo���Ȃ�
    
    Derived derived;
    derived.foo(); // ���N���X��foo���Ă΂��
    derived.bar(); // �h���N���X�Œǉ�����bar���Ă΂��
}
