#include <iostream>

void nochange(int i)
{
    // ��������ύX���邪�A�Ăяo�����ϐ����͕̂ύX����Ȃ�
    i = 42;
}

void set42(int* pi) // int�^�ւ̃|�C���^�[�������Ƃ��Ď󂯎��
{
    // �����œn���ꂽ�A�h���X���w�������ϐ���42��������
    *pi = 42;
}

int main()
{
    int i = 0; // i�͂��̎��_�ł�0
    
    nochange(i); // �ϐ�i�������Ă���l������n��
    
    // �ϐ�i���͕̂ύX����Ȃ�
    std::cout << i << std::endl;
    
    set42(&i); // �ϐ�i�ւ̃A�h���X��n���Ă���

    // set42���A�h���X���g���ĕϐ�i��ύX���Ă���̂ŁAi�̒l��42�ɂȂ��Ă���
    std::cout << i << std::endl;
}
