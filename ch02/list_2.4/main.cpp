#include <iostream>

// �����o�[�ϐ���3���������p��
union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u;

    std::cout << "u.a�̃A�h���X�� " << &u.a << std::endl;
    std::cout << "u.b�̃A�h���X�� " << &u.b << std::endl;
    std::cout << "u.c�̃A�h���X�� " << &u.c << std::endl;
}
