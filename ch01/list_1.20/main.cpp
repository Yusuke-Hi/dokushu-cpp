#include <iostream>

int main()
{
    int array[10] = {};

    // �z��̃T�C�Y��v�f�̌^�Ŋ���Ɣz��̒������킩��
    std::size_t length = sizeof(array) / sizeof(int);

    std::cout << "array[" << length << "]" << std::endl;
}
