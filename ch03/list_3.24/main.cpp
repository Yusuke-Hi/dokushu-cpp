#include <iostream>

class S
{
    static int count; // �C���X�^���X�̐��𐔂���static�����o�[�ϐ�

public:
    S();
    ~S();

    static void show_count(); // static�����o�[�֐��̐錾
};

int S::count = 0; // static�����o�[�ϐ��̎��̂��`����0�ŏ���������

S::S()
{
    // �C���X�^���X�����ꂽ��C���N�������g����
    ++count;
}

S::~S()
{
    // �j�����ꂽ��f�N�������g����
    --count;
}

void S::show_count()
{
    std::cout << "S::count: " << count << std::endl;
}

int main()
{
    // �ǂ̃C���X�^���X�ɂ����ѕt���Ȃ��̂ŃC���X�^���X���Ȃ��Ă��ĂԂ��Ƃ��ł���
    S::show_count();

    S a;

    a.show_count(); // �C���X�^���X���g���ČĂяo�����Ƃ��ł���
}
