#include <iostream>

class A
{
public:
    void foo();
};

void A::foo()
{
    std::cout << "A::foo()" << std::endl;
}

void call_foo(A* pa)
{
    pa->foo(); // �|�C���^�[���g���ă����o�[�ɃA�N�Z�X
    // (*pa).foo() �Ə������Ƃ��ł���
}

int main()
{
    A a;
    call_foo(&a);
}
