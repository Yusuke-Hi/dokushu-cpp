#include <iostream>

namespace A // ���O���A
{
    struct S // ���O���A�̍\����S
    {
        int a;
    };

    void foo() // ���O���A�̊֐�foo()
    {
        std::cout << "A::foo()" << std::endl;
    }
}

namespace B // ���O���B
{
    struct S // ���O���B�̍\����S
    {
        int b;
    };

    void foo() // ���O���B�̊֐�foo()
    {
        std::cout << "B::foo()" << std::endl;
    }
}

int main()
{
    A::foo(); // ���O���A�ɂ���֐�foo()�̌Ăяo��

    B::foo(); // ���O���B�ɂ���֐�foo()�̌Ăяo��

    A::S as; // ���O���A�̍\����S

    B::S bs; // ���O���B�̍\����S

    // as = bs; // �G���[�B���O��Ԃ��قȂ�̂ŕʂ̌^�Ƃ��Ĉ�����
}
