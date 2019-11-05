#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base�f�t�H���g�R���X�g���N�^�[" << std::endl;
    }
    explicit Base(int i)
    {
        std::cout << "A�����t���R���X�g���N�^�[: " << i << std::endl;
    }
};

class Derived : public Base
{
public:
    explicit Derived(int i) : Base{ i } {}
};

int main()
{
    Derived derived{ 42 };
}
