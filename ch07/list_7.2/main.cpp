#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base�R���X�g���N�^�[" << std::endl; }
    ~Base() { std::cout << "Base�f�X�g���N�^�[" << std::endl; }
};

class Derived : public Base
{
public:
    Derived() { std::cout << "Derived�R���X�g���N�^�[" << std::endl; }
    ~Derived() { std::cout << "Derived�f�X�g���N�^�[" << std::endl; }
};

class MoreDerived : public Derived
{
public:
    MoreDerived() { std::cout << "MoreDerived�R���X�g���N�^�[" << std::endl; }
    ~MoreDerived() { std::cout << "MoreDerived�f�X�g���N�^�[" << std::endl; }
};

int main()
{
    MoreDerived more_derived;
    std::cout << "�I�u�W�F�N�g�\�z����" << std::endl;
}
