#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };
    int i = 0;
    
    do
    {
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            ++i; // �d�v
            continue; // �������ɔ��
        }
    
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // ���[�v���I������
        }
        
        std::cout << "elem = " << value[i] << std::endl;
        ++i; // �z��̃C���f�b�N�X��1�i�߂�
    } while (i < 7);

    std::cout << "���[�v�̏I��" << std::endl;
}
