#include <iostream>

class BaseA
{
public:
    void method_BaseA()
    {
        std::cout << "BaseA::method_BaseA()" << std::endl;
    }
};

class BaseB
{
public:
    void method_BaseB()
    {
        std::cout << "BaseB::method_BaseB()" << std::endl;
    }
};

class Derived
    : public BaseA
    , public BaseB // 2�ڂ̃N���X���p��
{
public:
    void method_Derived()
    {
        std::cout << "Derived::method_Derived()" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method_BaseA(); // BaseA����p�����������o�[�֐��̌Ăяo��
    derived.method_BaseB(); // BaseB����p�����������o�[�֐��̌Ăяo��
    derived.method_Derived(); // Derived�Œ�`���������o�[�֐��̌Ăяo��

    BaseA& base_a = derived; // Derived��BaseA�̔h���N���X�Ȃ̂�BaseA�Ƃ��Ĉ�����

    // base_a.method_BaseB(); // �G���[�BBaseA�̎Q�Ƃ��g���Ă���̂ŁA
                              // BaseB�̃����o�[�֐����Ăяo���Ȃ�
    
    //base_a.method_Derived(); // �G���[�B���l��Derived�ł͂Ȃ��̂ŌĂׂȂ�

    BaseB& base_b = derived; // Derived��BaseB�̔h���N���X�ł�����̂�
                             // BaseB�Ƃ��Ă�������

    //base_b.method_Derived(); // �G���[�BBaseA���l
    //base_b.method_Derived(); // �G���[�BBaseA���l
}
