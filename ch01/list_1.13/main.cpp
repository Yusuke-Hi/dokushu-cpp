#include <iostream>

int main()
{
    int* ptr = 0; // �k���|�C���^�[�ŏ�����

    std::cout << ptr << std::endl; // �|�C���^�[�ϐ��������Ă���A�h���X��\������

    ptr = nullptr; // �k���|�C���^�[���e��������

    std::cout << ptr << std::endl;
}
