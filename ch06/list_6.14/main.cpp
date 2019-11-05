#include <iostream>

class Integer
{
    int value;

public:
    explicit Integer(int value) : value{ value } { }

    // �����o�[�֐��Ŏ������邱�Ƃ��ł���
    friend Integer operator+(const Integer&, int);

    // �����o�[�֐��ł͎����ł��Ȃ�
    friend Integer operator+(int, const Integer&);

    friend Integer operator-(const Integer&, int);
    friend Integer operator-(int, const Integer&);

    void show() const;
};

Integer operator+(const Integer& lhs, int rhs)
{
    // �t�����h�֐��Ȃ̂ŁA�v���C�x�[�g�����o�[�ɃA�N�Z�X�ł���
    return Integer{ lhs.value + rhs };
}

// Integer�̃C���X�^���X���E�ӂɂ���+�͂��̃I�[�o�[���[�h���g�p�����
Integer operator+(int lhs, const Integer& rhs)
{
    return Integer{ lhs + rhs.value };
}

Integer operator-(const Integer& lhs, int rhs)
{
    return Integer{ lhs.value - rhs };
}

Integer operator-(int lhs, const Integer& rhs)
{
    return Integer{ lhs - rhs.value };
}

void Integer::show() const
{
    std::cout << "value: " << value << std::endl;
}

int main()
{
    Integer ten{ 10 };

    Integer result = 1 + ten - 8;

    result.show();
}
