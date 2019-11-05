#include <iostream>

class Base
{
public:
    virtual void method();
};

void Base::method()
{
    // ���N���X�ł̎����F�h���N���X����Ăяo����邱�Ƃ����҂���
    std::cout << "Base::method()" << std::endl;
}

class Derived : public Base
{
public:
    void method() override;
};

void Derived::method()
{
    std::cout << "Derived::method()" << std::endl;
    Base* base = this; // ���N���X�ւ̃|�C���^�[���擾
    base->method(); // ���N���X�̃����o�[���Ă�ł���c�c����
}

int main()
{
    Derived derived;
    derived.method(); // �I�[�o�[���C�h���������o�[�֐��̌Ăяo��
}
