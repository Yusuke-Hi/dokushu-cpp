#include <iostream>

void show(int& v)
{
    std::cout << "�Q��: " << v << std::endl;
}

void show(int&& v) // �E�Ӓl�Q�ƂŎ󂯎��I�[�o�[���[�h
{
    std::cout << "�E�Ӓl�Q��: " << v << std::endl;
}

int main()
{
    int v = 1;
    show(v); // �ϐ��͍��Ӓl
    show(42); // ���l�͉E�Ӓl
}