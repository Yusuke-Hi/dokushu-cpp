#include <iostream>

// ���̊֐������O�����ŗ��邱�Ƃ͂Ȃ�
void no_throw_exception() noexcept
{
    try
    {
        throw 0;
    }
    catch (...)
    {
        // noexcept�w�肵���֐��ł��A�����ł����ƕ߂܂��Ă���Ζ��Ȃ�
        std::cout << "��O��߂܂��܂���" << std::endl;
    }
}

int main()
{
    // ���̊֐������O�����ŗ��邱�Ƃ͂Ȃ�
    no_throw_exception();
}
