#include <iostream>

union U
{
    // �f�t�H���g�̃A�N�Z�X�w���public
    float f;

private:
    int i;

public:
    U(); // �R���X�g���N�^�[��f�X�g���N�^�[����`�ł���
    int get_i() const;
};

// �R���X�g���N�^�[�ł͐擪�ȊO�̃����o�[�ϐ��ŏ������ł���
U::U() : i(0xdeadbeef)
{
    // �����o�[�̃A�h���X���
    std::cout << "&f: " << &f << std::endl
        << "&i: " << &i << std::endl;
}

int U::get_i() const
{
    return this->i; // ���p�̂̃����o�[�֐���this���g����
}

int main()
{
    U u; // �f�t�H���g�R���X�g���N�^�[��int�^�ŏ���������
    std::cout << std::hex << u.get_i() << std::endl;
    u.f = 2.71828f; // float�^�̒l��������
    std::cout << std::hex << u.get_i() << std::endl;
}
