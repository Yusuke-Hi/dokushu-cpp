#include <iostream>

class Base
{
    // ��ی상���o�[
protected:
    void protected_member()
    {
        std::cout << "Base::protected_member()" << std::endl;
    }
};

class Derived : public Base
{
public:
    void member_test();
};

void Derived::member_test()
{
    // OK�B���N���X�̔�ی상���o�[�ɂ͔h���N���X����A�N�Z�X�ł���
    protected_member();
}

int main()
{
    Derived derived;

    // �G���[�Bpublic�Ŕh�����Ă���ی상���o�[�͊O������A�N�Z�X�ł��Ȃ�
    // derived.protected_member();

    // OK�B���J�����o�[�ɂ͊O��������A�N�Z�X�ł���
    derived.member_test();
}
