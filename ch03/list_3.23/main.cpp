#include <iostream>

class S
{
    static int count; // �C���X�^���X�̐��𐔂���static�����o�[�ϐ�

public:
    S();
    ~S();

    void show_count() const;
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

void S::show_count() const
{
    std::cout << "S::count: " << count << std::endl;
}

void function()
{
    S a;
    a.show_count(); // �C���X�^���X��main()��a�Ƃ��̊֐�����a��2������

    // ���̊֐�����a�͊֐����I������Ɠ����ɔj�������i�ڍׂ�4.3�߁j
}

int main()
{
    S a;
    a.show_count(); // a�̃R���X�g���N�^�[�ŃC���N�������g�����̂�1���o�͂����
    function();
    a.show_count(); // function()�֐�����a�͔j������Ă���̂�1�ƂȂ�
}
