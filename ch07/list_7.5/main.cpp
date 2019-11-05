#include <iostream>

class Base
{
public:
    virtual void method();
};

void Base::method()
{
    std::cout << "Base�̃����o�[�֐�" << std::endl;
}

class Derived : public Base
{
public:
    // Base::method()���I�[�o�[���C�h
    void method() override;
};

void Derived::method()
{
    std::cout << "Derived�ŃI�[�o�[���C�h���������o�[�֐�" << std::endl;
}

int main()
{
    Derived derived;
    Base& base = derived; // ���N���X�ւ̎Q�Ƃ��擾

    // ���N���X�ւ̎Q�ƌo�R�ł����Ă��A
    // ���z�֐���Derived�ŃI�[�o�[���C�h�����ق����Ă΂��
    base.method();
}
