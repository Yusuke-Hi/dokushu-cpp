#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };

    int i = 0;
    while (i < 7)
    {
        // �z��̐擪���珇�Ԃɕ\�����Ă������A���̒l��������X�L�b�v���āA
        // 0�������炻���Ń��[�v���I������
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            ++i; // �d�v
            continue; // ���̉�̃��[�v�͂����ŏI���A�������ɔ��
        }
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // ���̃��[�v�����𒆒f���āA���[�v�̎��̏����ɐi��
        }

        std::cout << "elem = " << value[i] << std::endl;
        ++i; // �z��̃C���f�b�N�X��1�i�߂�
    }

    std::cout << "���[�v�̏I��" << std::endl;
}