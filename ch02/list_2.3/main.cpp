#include <iostream>

// �����o�[�ϐ���3�������\����
struct S
{
    int a;
    int b;
    int c;
};

int main()
{
    S s;

    std::cout << "s.a�̃A�h���X�� " << &s.a << std::endl;
    std::cout << "s.b�̃A�h���X�� " << &s.b << std::endl;
    std::cout << "s.c�̃A�h���X�� " << &s.c << std::endl;
}
