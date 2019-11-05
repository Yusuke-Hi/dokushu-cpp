#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer operator|(const Integer& rhs) const; // �r�b�g�a
    Integer operator&(const Integer& rhs) const; // �r�b�g��
    Integer operator^(const Integer& rhs) const; // �r�b�g�r���I�_���a

    Integer operator~() const; // �r�b�g���]

    void show() const;
};

Integer Integer::operator|(const Integer& rhs) const
{
    return Integer{ value | rhs.value };
}

Integer Integer::operator&(const Integer& rhs) const
{
    return Integer{ value & rhs.value };
}

Integer Integer::operator^(const Integer& rhs) const
{
    return Integer{ value ^ rhs.value };
}

Integer Integer::operator~() const
{
    return Integer{ ~value };
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 0b0011;
    Integer y = 0b1100;
    Integer z = 0b1001;

    auto v = ~(x ^ y) | (z & x);

    v.show();
}
