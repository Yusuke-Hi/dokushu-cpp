#include <iostream>

extern int value; // extern�ϐ�

void show_extern_variable(); // ���̃t�@�C���̊֐��̐錾

int main()
{
    std::cout << "main: extern�ϐ��̃A�h���X: " << &value << std::endl;
    std::cout << "main: extern�ϐ��̒l: " << value << std::endl;

    value = 0;

    show_extern_variable();
}
