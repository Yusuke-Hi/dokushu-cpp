#include <iostream>

// ���1��Ԃ��֐�
int one()
{
    return 1;
}

int main()
{
    auto d = 3.14; // 3.14��double�^�̒l�Ȃ̂�d��double�^�ɐ��_�����

    d = 2.71f; // 2.71f��float�^�Ȃ̂ŁAdouble�^�ɐ��_���ꂽd�ɖ��Ȃ��i�[�ł���
    
    std::cout << d << std::endl;
    
    // �^���_�͊֐��Ăяo���␔�l�v�Z�Ȃǂ̎��̌��ʂ�����s����
    
    // one()��int�^�̒l��Ԃ��֐��Ȃ̂ŁA�ϐ�i��int�^�ɐ��_�����
    auto i = one();
    
    i = 42.195; // i��int�^�Ȃ̂�double�^�̒l�̑���ł͈Öق̌^�ϊ����s����
    
    std::cout << i << std::endl;
}
