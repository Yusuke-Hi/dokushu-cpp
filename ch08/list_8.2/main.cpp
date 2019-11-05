#include <iostream>

int main()
{
    auto dephault = std::cout.flags(); // �f�t�H���g�̃t���O��ۑ�

    std::cout.setf(std::ios::scientific);

    // basefield���N���A�A�܂��Ɋւ���t���O���N���A
    std::cout.setf(std::ios::hex, std::ios::basefield);

    std::cout << 123.456f << std::endl; // �Ȋw�Z�p�\�L
    std::cout << 123456 << std::endl; // 16�i���\�L

    std::cout.flags(dephault); // �f�t�H���g�Ƀ��Z�b�g

    std::cout << 123.456f << std::endl; // �ʏ�\�L
    std::cout << 123456 << std::endl; // 10�i���\�L
}