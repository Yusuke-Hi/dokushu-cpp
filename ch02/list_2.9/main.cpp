#include <iostream>

int main()
{
    int value = 42; // int�^�̕ϐ�
    int other = 0; // �ʂ̕ϐ�
    int* pointer = &value; // �ϐ�value�ւ̃|�C���^�[
    int& reference = value; // �ϐ�value�ւ̎Q��

    std::cout << "value�̃A�h���X��" << &value << "�ŁA�l��" << value <<
        "�ł�" << std::endl;

    std::cout << "other�̃A�h���X��" << &other << "�ŁA�l��" << other <<
        "�ł�" << std::endl;

    std::cout << "pointer�̎��A�h���X��" << pointer << "�ŁA�l��" <<
        *pointer << "�ł�" << std::endl;

    std::cout << "reference�̃A�h���X��" << &reference << "�ŁA�l��" <<
        reference << "�ł�" << std::endl;

    pointer = &other; // �|�C���^�[�����A�h���X��other�̃A�h���X�ɕύX
    reference = other; // �Q�Ɛ��value����other�֕ς�������
    
    std::cout << std::endl; // 1�s��s������
    
    std::cout << "value�̃A�h���X��" << &value << "�ŁA�l��" << value <<
        "�ł�" << std::endl;
    
    std::cout << "other�̃A�h���X��" << &other << "�ŁA�l��" << other <<
        "�ł�" << std::endl;
    
    std::cout << "pointer�̎��A�h���X��" << pointer << "�ŁA�l��" <<
        *pointer << "�ł�" << std::endl;
    
    std::cout << "reference�̃A�h���X��" << &reference << "�ŁA�l��" <<
        reference << "�ł�" << std::endl;
}
