#include <iostream>

struct product
{
    int id; // ���iID
    int price; // �P��
    int stock; // �݌ɐ�
}; // ���̃Z�~�R������Y�ꂪ���Ȃ̂Œ���

int main()
{
    product pen; // �y���Ɋւ���f�[�^�����ϐ�

    // �h�b�g���Z�q���g���ăy���Ɋւ�����������o�[�ϐ��Ɋi�[����
    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen; // �\���̕ϐ��ւ̃|�C���^�[

    // �A���[���Z�q���g���ă����o�[�ϐ����擾����
    std::cout << "���iID: " << ptr->id << std::endl;
    std::cout << "�P��: " << ptr->price << std::endl;
    std::cout << "�݌ɐ�: " << ptr->stock << std::endl;
}
