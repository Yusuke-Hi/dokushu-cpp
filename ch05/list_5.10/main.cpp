#include <iostream>

int* local()
{
    int i = 42; // ���[�J���ϐ�
    return &i; // �x���I�@�_���O�����O�|�C���^�[
}

int* dyn_alloc()
{
    int* ptr = new int; // int�^�̃I�u�W�F�N�g�𓮓I�m��
    *ptr = 42; // ���I�m�ۂ���int�^�̃I�u�W�F�N�g�ɃA�N�Z�X
    return ptr; // ���I�m�ۂ������̂̓X�R�[�v����o�Ă��j������Ȃ�
}

int main()
{
    // local()�ō�������[�J���ϐ��͂����j������Ă���̂ŁA
    // ���̃I�u�W�F�N�g���Q�Ƃ��Ă͂����Ȃ�
    // int* l = local();
    // std::cout << *l << std::endl;

    // ���I�m�ۂ����I�u�W�F�N�g�͊֐�����߂��Ă��j������Ȃ��̂ŗL��
    int* d = dyn_alloc();
    std::cout << *d << std::endl;
    delete d; // �����Ŕj������Ȃ��̂ŁA�s�v�ɂȂ�����v���O���}�[���j������

    // �j���������Ƃ̃I�u�W�F�N�g�͂��������ɂȂ��Ă���̂ŎQ�Ƃ��Ă͂����Ȃ�
    // std::cout << *d << std::endl;
}
