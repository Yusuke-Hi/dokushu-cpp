#include <iostream>

class Base
{
    // ����J�ȉ��z�֐�
    virtual void method();

public:
    void call_method() { method(); }
};

void Base::method()
{
    std::cout << "Base::method()" << std::endl;
}

class Derived : public Base
{
    // ���N���X�Ŕ���J�ƂȂ��Ă��Ă��I�[�o�[���C�h�����͂ł���
    void method() override;
};

void Derived::method()
{
    std::cout << "Derived::method()" << std::endl;
    // Base::method(); // �G���[�BBase::method�͔���J�����o�[�Ȃ̂ŌĂяo���Ȃ�
}

int main()
{
    Derived derived;
    derived.call_method(); // ����J�����o�[�̃I�[�o�[���C�h���Ăяo�����
}
