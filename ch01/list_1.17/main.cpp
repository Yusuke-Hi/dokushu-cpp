#include <iostream>

int main()
{
    char c = 99;

    // �L���X�g���Z�q���g����int�^�ɕϊ����ĕ\��
    std::cout << static_cast<int>(c) << std::endl;
}
