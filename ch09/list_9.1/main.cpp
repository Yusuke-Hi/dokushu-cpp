#include <iostream>

// �����̐Ϙa���Z
int fused_multiply_add(int a, int b, int c)
{
    int r = a * b + c;
    return r;
}

// float�̐Ϙa���Z
float fused_multiply_add(float a, float b, float c)
{
    // �֐��̖{�̂ł̌v�Z�͐����Ƃ܂���������
    float r = a * b + c;
    return r;
}

int main()
{
    // �����ł̃I�[�o�[���[�h�Ăяo��
    std::cout << fused_multiply_add(1, 2, 3) << std::endl;

    // float�ł̃I�[�o�[���[�h�Ăяo��
    std::cout << fused_multiply_add(1.23456f, 1.23456f, 1.23456f) << std::endl;

    // �z�肵�Ă��Ȃ�����double���g�����Ăяo��
    // ���G�ȃI�[�o�[���[�h�����i�ǂ̃I�[�o�[���[�h���Ăяo���������߂�菇�j��
    // �v���Z�X�ɂ���āA���̌Ăяo����int�̃I�[�o�[���[�h���Ă΂��悤�ɂȂ�
    std::cout << fused_multiply_add(1.23456, 1, 1.23456) << std::endl;
}
