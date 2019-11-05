#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    bool operator==(const Integer& rhs) const;
    bool operator!=(const Integer& rhs) const;

    bool operator<(const Integer& rhs) const;
    bool operator>(const Integer& rhs) const;
    bool operator<=(const Integer& rhs) const;
    bool operator>=(const Integer& rhs) const;
};

bool Integer::operator==(const Integer& rhs) const
{
    return value == rhs.value;
}

bool Integer::operator!=(const Integer& rhs) const
{
    // ==���Ăяo���Ă��̔ے��Ԃ�
    return !(*this == rhs);
}

bool Integer::operator<(const Integer& rhs) const
{
    return value < rhs.value;
}

bool Integer::operator>(const Integer& rhs) const
{
    // ���E�����ւ��ď��Ȃ���ĂԂƑ�Ȃ�̌��ʂɂȂ�
    return rhs < *this;
}

bool Integer::operator<=(const Integer& rhs) const
{
    // ��Ȃ��ے肵�����ʂ����Ȃ�C�R�[���̌��ʂɂȂ�
    return !(rhs < *this);
}

bool Integer::operator>=(const Integer& rhs) const
{
    // ���E�����ւ��ď��Ȃ�C�R�[�����ĂԂ�
    // ��Ȃ�C�R�[���̌��ʂɂȂ�
    return rhs <= *this;
}

int main()
{
    Integer x = 10;
    Integer y = 3;

    if (x != y)
    {
        std::cout << "x != y ��true" << std::endl;
    }
    else
    {
        std::cout << "x != y ��false" << std::endl;
    }

    if (y >= x)
    {
        std::cout << "y >= x ��true" << std::endl;
    }
    else
    {
        std::cout << "y >= x ��false" << std::endl;
    }
}
