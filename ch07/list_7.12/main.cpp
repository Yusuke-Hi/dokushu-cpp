#include <iostream>

class Base
{
    int value;

public:
    Base(int value) : value{ value } { }
    void show();
};

void Base::show()
{
    std::cout << "this: " << this << std::endl
        << "this->value: " << value << std::endl;
}

class DerivedA : public Base
{
public:
    DerivedA(int value) : Base{ value } { }
};

class DerivedB : public Base
{
public:
    DerivedB(int value) : Base{ value } { }
};

// DerivedA��DerivedB��Base����h�����Ă��邱�Ƃɒ���
class MoreDerived : public DerivedA, public DerivedB
{
public:
    MoreDerived(int d_a, int d_b)
        : DerivedA{ d_a }, DerivedB{ d_b }
    {
    }
};

int main()
{
    MoreDerived more_derived{ 42, 72 };

    // DerivedA��DerivedB�A�ǂ����Base::show()���g����H
    more_derived.show();

    // DerivedA��DerivedB�A�ǂ����Base�ւ̎Q�Ƃ���������H
    Base& base = more_derived;

    base.show();
}
