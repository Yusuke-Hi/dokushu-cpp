#include <iostream>

class Base
{
public:
    virtual void foo(int i)
    {
        std::cout << "Base::foo()" << std::endl;
    }
};

template <typename T>
class Derived : public Base
{
public:
    // Base��foo���I�[�o�[���C�h���Ă�����肾���A
    // T�ɓn�����e���v���[�g�����ɂ���ē��삪�قȂ�
    void foo(T val) override
    {
        std::cout << "Derived::foo()" << std::endl;
    }
};

int main()
{
    Derived<int> di; // foo���I�[�o�[���C�h�����ꍇ

                     // ���z�֐����o�R�����h���N���X�̃����o�[�Ăяo��
    static_cast<Base&>(di).foo(0);

    // �G���[�B���z�֐��̉������̌^���قȂ��Ă��܂��I�[�o���C�h�����s����
    // Derived<float> df;
}
