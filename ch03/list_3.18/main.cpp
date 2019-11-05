#include <iostream>

class Base
{
    int value = 0;

public:
    void set_value(int value);
    int get_value() const;
};

void Base::set_value(int value)
{
    this->value = value;
}

int Base::get_value() const
{
    return value;
}

// �\���̂��N���X����h�����邱�Ƃ��ł���i�f�t�H���g�̃A�N�Z�X�w��q��public�j
struct Derived : Base
{
    // �R���X�g���N�^�[���f�X�g���N�^�[�����Ă�
    Derived();
    ~Derived();
};

Derived::Derived()
{
    std::cout << "�R���X�g���N�^�[" << std::endl;
}

Derived::~Derived()
{
    std::cout << "�f�X�g���N�^�[" << std::endl;
}

int main()
{
    Derived d;

    std::cout << d.get_value() << std::endl;

    d.set_value(42);

    std::cout << d.get_value() << std::endl;
}
