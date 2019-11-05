#include <iostream>
// A, B, C�����ꂼ��Ⴄ�^�������ꍇ�A�v�Z���ʂ̌^�͊ȒP�ɂ͂킩��Ȃ�
// �߂�l�̌^��auto�Ǝw�肷��Ζ߂�l�̌^��return�����琄�_����
template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    // �󂯎�������������ƂɌv�Z���ēK�؂Ȍ^�ŕԂ�
    // �i���̏ꍇ�A�����ɂ�����Öق̌^�ϊ��K���ɂ��double�ŕԂ����j
    std::cout << fused_multiply_add<double, int, float>(1.23456, 2, 1.23456f)
        << std::endl;
}
