#include <iostream>

class A
{
    union // �^�����Ȃ�
    {
        int i;
        float f;
    }; // �ϐ������Ȃ�

    long l; // �������p�͈̂̔͊O�̃����o�[�ϐ�

public:
    A();

    int get_i() const;
    void set_f(float f);
    long get_l() const;
};

A::A() : i(0xdeadbeef), l(0xc0ffee)
{
    // �N���X�̃����o�[�ϐ��̂悤�ɃA�N�Z�X�ł���
    std::cout << "&f: " << &f << std::endl
        << "&i: " << &i << std::endl
        << "&l: " << &l << std::endl;
}

int A::get_i() const
{
    return i;
}

void A::set_f(float f)
{
    this->f = f;
}

long A::get_l() const
{
    return l;
}

int main()
{
    A a; // �f�t�H���g�R���X�g���N�^�[��int�^�ŏ���������
    std::cout << "i: " << std::hex << a.get_i() << std::endl;
    a.set_f(2.71828f); // float�^�̒l��������
    std::cout << "i: " << std::hex << a.get_i() << std::endl;
    std::cout << "l: " << std::hex << a.get_l() << std::endl;
}
