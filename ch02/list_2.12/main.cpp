#include <iostream>

// �l��1�̌^�𐄘_���A���̌^��߂�l�̌^�Ƃ��Ďg��
decltype(1) one()
{
    return 1;
}

int main()
{
    auto i = one(); // auto���g�����^���_

    decltype(i) j; // �ϐ�i����^�𐄘_���ĕϐ��錾������̂ŏ����l�͕s�v
    
    j = 42.195; // j��int�^�ɐ��_����Ă���̂ŁA�Öق̌^�ϊ����s����
    
    std::cout << j << std::endl;
}
