#include <iostream>
#include <typeinfo>

class Base
{
};

// �p���֌W
class Derived : public Base
{
};

// ��܊֌W
class Composed
{
    Base base;
};

int main()
{
    // �p���֌W�������Ă��ʂ̌^�Ƃ��Ĉ�����
    if (typeid(Base) == typeid(Derived))
    {
        std::cout << "Base��Derived�͓����N���X�ł�" << std::endl;
    }
    else
    {
        std::cout << "Base��Derived�͈قȂ�N���X�ł�" << std::endl;
    }

    // ��܊֌W����͂�ʂ̌^�Ƃ��Ĉ�����
    if (typeid(Base) == typeid(Composed))
    {
        std::cout << "Base��Composed�͓����N���X�ł�" << std::endl;
    }
    else
    {
        std::cout << "Base��Composed�͈قȂ�N���X�ł�" << std::endl;
    }
}
