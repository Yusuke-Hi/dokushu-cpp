#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };

    iv.resize(4); // �؂�l�߂�����Ƀ��T�C�Y

    std::cout << "size() = " << iv.size() << std::endl;

    iv.resize(6, -1); // �L�΂��B�V����������������-1�ŏ����������

    std::cout << "size() = " << iv.size() << std::endl;

    for (int i : iv)
    {
        std::cout << i << std::endl;
    }
}