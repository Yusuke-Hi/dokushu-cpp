#include <iostream>

int value = 42; // �ϐ��̎��̂̐錾�A�������͂����ł����ł��Ȃ�

void show_extern_variable()
{
    std::cout << "extern�ϐ��̃A�h���X: " << &value << std::endl;
    std::cout << "extern�ϐ��̒l: " << value << std::endl;
}
