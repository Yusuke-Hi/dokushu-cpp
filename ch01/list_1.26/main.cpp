#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };

    // �C���f�b�N�X�ϐ��̐錾�ƁA�������ƁA�i�߂鏈����1�J���ɋL�q�ł���
    for (int i = 0; i < 7; ++i)
    {
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            continue; // ���̉�̃��[�v�͂����ŏI��邪�A�K��i��1�i�߂���
        }
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // while�̂Ƃ��Ɠ����ł��̃��[�v�����S�̂𒆒f����
        }

        std::cout << "elem = " << value[i] << std::endl;
    }

    std::cout << "���[�v�̏I��" << std::endl;
}
