#include <iostream>

int main()
{
    int value = 42; // int�^�̕ϐ�

    std::cout << "value�̃A�h���X��" << &value << "�ŁA�l��" << value <<
        "�ł�" << std::endl;
    
    int& reference = value; // �ϐ�value�ւ̎Q��
    
    std::cout << "reference�̃A�h���X��" << &reference << "�ŁA�l��" <<
        reference << "�ł�" << std::endl;
    
    reference = 0; // �Q�Ƃ��g���ĕϐ�value�̒l������������
    
    std::cout << "value�̃A�h���X��" << &value << "�ŁA�l��" <<
        value << "�ł�" << std::endl;
}
