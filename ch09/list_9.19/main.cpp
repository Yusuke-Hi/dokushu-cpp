#include <iostream>

template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    // 2�ڂ̃e���v���[�g�����iB�j��float�^�ɂ��������A
    // ���̂��߂ɂ�A�̃e���v���[�g�������w�肵�Ȃ���΂Ȃ�Ȃ�
    std::cout << fused_multiply_add<float, float>(1.23456f, 2, 3) << std::endl;

    // A�̃e���v���[�g�����𐄘_���������̂ŁA2�ڂ̃e���v���[�g�������w��ł͂Ȃ��A
    // �������̂��L���X�g���Đ��_������
    std::cout << fused_multiply_add(1.23456f, static_cast<float>(2), 3)
        << std::endl;
}
