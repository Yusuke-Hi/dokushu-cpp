#include <iostream>

class A
{
    int i;

public:
    // �R���X�g���N�^�[���C�����C���w��t���Ő錾
    inline A();
    
    // �����ŃC�����C���ɂȂ郁���o�[�֐�
    void set_i(int i)
    {
        this->i = i;
    }
    
    // �C�����C���ɂȂ�Ȃ������o�[�֐�
    void show() const;
};

A::A() : i(0) { } // ��`�ɂ�inline�͕s�v

void A::show() const
{
    std::cout << i << std::endl;
}

int main()
{
    A a;
    a.show();
    a.set_i(123);
    a.show();
}
