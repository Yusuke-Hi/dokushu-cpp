#include <iostream>

class A
{
public:
    void foo() { std::cout << "A::foo" << std::endl; }
};

class B
{
    A a;

public:
    // �����o�[�ϐ���a��Ԃ��ϊ��֐�
    operator A& () { return a; }
};

int main()
{
    B b;
    b.foo(); // �G���[�BB��foo�Ƃ��������o�[�֐��������Ȃ�
}
