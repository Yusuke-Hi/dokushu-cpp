#include <iostream>

// �󂯎�����Q�Ƃ����̂܂ܕԂ��֐�
int& id(int& i)
{
    return i;
}

int main()
{
    int i = 42;

    auto& j = id(i); // �Q�ƂɌ^���_

    j = 0; // �Q�ƂȂ̂�i���ς��

    std::cout << i << std::endl;
}
