#include <iostream>

int main()
{
    int array[10] = {};

    // �z��̗v�f���g���΁A�^���ύX����Ă��v�f�̌^���������ύX�����̂�
    // �������������v�Z�ł���
    std::size_t length = sizeof(array) / sizeof(array[0]);
    
    std::cout << "array[" << length << "]" << std::endl;
}
