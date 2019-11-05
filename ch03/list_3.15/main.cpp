#include <iostream>

// �ʐς���͒��Ƃ��������̂́A�O�p�`��l�p�`�A
// �~�ł��ׂČv�Z���@���Ⴄ�̂Ŋ��N���X�ŋ��ʉ��ł��Ȃ�
class Shape
{
public:
    virtual float area() const = 0; // �ʐς����߂鏃�����z�֐�
    virtual float perimeter() const = 0; // ���͒������߂鏃�����z�֐�
};

// �������z�֐��͊֐��{�̂������Ȃ��̂ŁA�����o�[�֐��̒�`�͂Ȃ�
// �����`�������N���X
class Rectangle : public Shape
{
    float height; // ����
    float width; // ��

public:
    explicit Rectangle(float height, float width);
    float area() const override;
    float perimeter() const override;
};

Rectangle::Rectangle(float height, float width)
    : height(height), width(width)
{
}

float Rectangle::area() const
{
    return height * width;
}

float Rectangle::perimeter() const
{
    return 2 * (height + width);
}

class Circle : public Shape
{
    float r; // ���a

public:
    explicit Circle(float r);
    float area() const override;
    float perimeter() const override;
};

Circle::Circle(float r) : r(r)
{
}

float Circle::area() const
{
    return r * r * 3.14f;
}

float Circle::perimeter() const
{
    return 2 * r * 3.14f;
}

int main()
{
    Rectangle rect(10, 2);
    std::cout << "rect" << std::endl;
    std::cout << " Area: " << rect.area() << std::endl;
    std::cout << " Perimeter: " << rect.perimeter() << std::endl;

    Circle circle(4);
    std::cout << "circle" << std::endl;
    std::cout << " Area: " << circle.area() << std::endl;
    std::cout << " Perimeter: " << circle.perimeter() << std::endl;
}
