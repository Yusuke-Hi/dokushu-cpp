#include <iostream>

// ���������ꂼ�������e���v���[�g�p�����[�^�[���g���Ă���
template <typename P, typename S, typename C, typename O>
auto lea(P ptr, S stride, C count, O offset)
{
    return ptr + stride * count + offset;
}

int main()
{
    int i = 0;

    // int*, int, int, int�ł��ꂼ�ꐄ�_�����i�߂�l�̌^��auto�Ő��_����Aint*�ƂȂ�j
    std::cout << lea(&i, 16, 4, 2) << std::endl;
}
