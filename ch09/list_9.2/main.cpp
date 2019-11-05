#include <iostream>

// �֐��e���v���[�g�ł̐Ϙa���Z
// ���̒i�K�ł͂܂��e���v���[�g�p�����[�^�[��T�͋�̓I�Ȍ^�����܂��Ă��Ȃ�
template <typename T>
T fused_multiply_add(T a, T b, T c) // �߂�l�̌^�ɂ��������ɂ��g����
{
    T r = a * b + c; // ���[�J���ϐ��̌^�ɂ��g����
    return r;
}

int main()
{
    // �֐��e���v���[�g��int�Ŏ��̉����ČĂяo��
    std::cout << fused_multiply_add<int>(1, 2, 3) << std::endl;

    // �֐��e���v���[�g��float�Ŏ��̉����ČĂяo��
    std::cout << fused_multiply_add<float>(1.23456f, 1.23456f, 1.23456f)
        << std::endl;

    // �֐��e���v���[�g��double�Ŏ��̉����ČĂяo��
    std::cout << fused_multiply_add<double>(1.23456, 1.23456, 1.23456)
        << std::endl;
}
