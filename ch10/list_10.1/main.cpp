#include <iostream>
void throw_zero()
{
    std::cout << "��O�𓊂���O" << std::endl;

    // int�^�̃I�u�W�F�N�g���O�I�u�W�F�N�g�Ƃ��ē�����
    // try�u���b�N���Ȃ��Ă���O�𓊂��邱�Ƃ͂ł���
    throw 0;

    std::cout << "��O�𓊂�������" << std::endl;
}

int main()
{
    // try�u���b�N�̒��œ�����ꂽ��O��catch�߂ŕ߂܂��邩�A
    // ����ɂ��̊֐��̌Ăяo�������߂܂���
    try
    {
        std::cout << "�֐��Ăяo���O" << std::endl;
        throw_zero(); // ���̊֐��̒��ŗ�O����������
        std::cout << "�֐��Ăяo����" << std::endl;
    }
    catch (int e) // ��O�I�u�W�F�N�g�������ŕ߂܂���
    {
        std::cout << "������ꂽ��O�I�u�W�F�N�g�̒l�� " << e << " �ł�"
            << std::endl;
    }
    std::cout << "�߂܂�������" << std::endl;
}
