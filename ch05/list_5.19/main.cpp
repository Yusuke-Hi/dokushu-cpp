#include <iostream>

// �󂯎�����Q�Ƃ����̂܂ܕԂ��֐�
int& id(int& i)
{
    return i;
}

int main()
{
    int i = 42;

    auto j = id(i); // j�͎Q�ƁH����Ƃ��l�H

    j = 0; // �Q�Ƃł����i���ς���Ă���͂�

    std::cout << i << std::endl;
}
