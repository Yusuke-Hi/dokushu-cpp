int* dangling_pointer()
{
    int i = 0;
    return &i; // �_���O�����O�|�C���^�[�B���[�J���ϐ�i�̎����͊֐��̏I���ƂƂ��ɐs����
}

int main()
{
    int* p = dangling_pointer();
    *p = 42; // �댯�B�������s�������[�J���ϐ���ύX���悤�Ƃ��Ă���
}
