#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3, 4 };

    // �^���_���g�����͈�for��
    // �����l�̎w��͂��Ă��Ȃ����A�z��̗v�f�̌^�ɐ��_�����i�����ł�int�^�j
    for (auto e : array)
    {
        std::cout << e << std::endl;
    }
}
