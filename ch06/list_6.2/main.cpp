#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    friend Integer operator+(int, const Integer& rhs); // 加算
    friend Integer operator+(const Integer& lhs, int); // 加算
    friend Integer operator+(const Integer& lhs, const Integer& rhs);
    Integer operator-(const Integer& rhs) const; // 減算
    Integer operator*(const Integer& rhs) const; // 乗算
    Integer operator/(const Integer& rhs) const; // 除算

    void show() const;
};

Integer operator+(int value, const Integer& rhs)
{
    return Integer{ value + rhs.value };
}

Integer operator+(const Integer& lhs, int value)
{
    return Integer{ lhs.value + value};
}

Integer operator+(const Integer& lhs, const Integer& rhs)
{
    return Integer{ lhs.value + rhs.value};
}

Integer Integer::operator-(const Integer& rhs) const
{
    return Integer{ value - rhs.value };
}

Integer Integer::operator*(const Integer& rhs) const
{
    return Integer{ value * rhs.value };
}

Integer Integer::operator/(const Integer& rhs) const
{
    return Integer{ value / rhs.value };
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;

    auto v = x - y / y + z * x;

    v.show();
}
