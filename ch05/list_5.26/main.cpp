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
    // �֐��|�C���^�[��錾��identity�ŏ���������
    int (*func)(int) = &identity;

    // �֐��|�C���^�[���o�R����identity���Ăяo��
    std::cout << "func(4): " << func(4) << std::endl;

    // �֐��|�C���^�[��square�̃A�h���X��������
    func = &square;

    // �֐��|�C���^�[���o�R����square���Ăяo��
    std::cout << "func(4): " << func(4) << std::endl;
}
