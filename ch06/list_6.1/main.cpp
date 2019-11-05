#include <iostream>

class Integer
{
    int value;

public:
    // �g�ݍ��݂̐����^�̂悤�Ɉ��������̂�explicit�͕t���Ȃ�
    Integer(int value) : value{ value } { }

    Integer add(const Integer& other) const; // ���Z
    Integer sub(const Integer& other) const; // ���Z
    Integer mul(const Integer& other) const; // ��Z
    Integer div(const Integer& other) const; // ���Z

    void show() const;
};

Integer Integer::add(const Integer& other) const
{
    return Integer{ value + other.value };
}

Integer Integer::sub(const Integer& other) const
{
    return Integer{ value - other.value };
}

Integer Integer::mul(const Integer& other) const
{
    return Integer{ value * other.value };
}

Integer Integer::div(const Integer& other) const
{
    return Integer{ value / other.value };
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

    auto v = x.sub(y.div(y)).add(z.mul(x));
    
    v.show();
}
