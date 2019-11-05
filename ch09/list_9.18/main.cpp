#include <iostream>

// �߂�l�𐄘_�ł͂Ȃ��A�e���v���[�g�����Ŏw�肵���^�ŕԂ��悤�ɂ����e���v���[�g
template <typename R, typename A, typename B, typename C>
R fused_multiply_add(A a, B b, C c)
{
    return static_cast<R>(a * b + c);
}

int main()
{
    // �v�Z���ʂ�float�^�ŕԂ��Ăق������A
    // �擪�̈����͓����I�ɂ�double�^�Ōv�Z���Ăق�������
    // ���ꂾ���w�肵�A���Ƃ̓R���p�C���[�ɐ��_������
    std::cout << fused_multiply_add<float, double>(1.23456f, 2, 3)
        << std::endl;
}
