#include <iostream>

int foo(int value)
{
    // �������G�ȏ���
    std::cout << "foo: " << value << std::endl;
    return value;
}

bool is_even(int value) // �����Ȃ�true��Ԃ��֐�
{
    return value % 2 == 0;
}

bool is_zero(int value)
{
    return value == 0;
}

int main()
{
    // foo(42)�̖߂�l��0�ł͂Ȃ������̏ꍇ�ɕ��򂳂��Ă��邪�A
    // ���G�ȏ���������foo()�֐���2��Ă΂�Ă��܂�
    if (is_even(foo(42)) && !is_zero(foo(42)))
    {
        std::cout << "foo(42)�̓[���ł͂Ȃ�������Ԃ��܂���" << std::endl;
    }
}
