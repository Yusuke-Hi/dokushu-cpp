#include <iostream>

int identity(int v)
{
    return v;
}

int square(int v)
{
    return v * v;
}

int main()
{
    // �֐����t�@�����X��錾��identity�ŏ���������
    int(&func)(int) = identity;

    // �֐����t�@�����X���o�R����identity���Ăяo��
    std::cout << "func(4): " << func(4) << std::endl;

    // func = square; // �G���[�B�֐����t�@�����X�͎Q�Ɛ�����Ƃ���ύX�ł��Ȃ�
}
