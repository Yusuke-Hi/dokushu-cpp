#include <iostream>

union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u = { 42 }; // �擪�̃����o�[�ŏ���������

                  // u.a��u.b�͓����ꏊ�ɂ���̂�u.b�̒l��u.a�Ɠ����ɂȂ�
    std::cout << "u.b�̒l�� " << u.b << std::endl;

    // u.c��u.a��u.b�Ɠ����ꏊ�ɂ���̂ŁA
    // u.c���g���ĕύX����Ƒ��̃����o�[�ϐ����ύX�����
    u.c = 1024;

    std::cout << "u.a�̒l�� " << u.a << std::endl;
}
