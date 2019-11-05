#include <iostream>

class Base
{
public:
    explicit Base(int value)
    {
        std::cout << value << std::endl;
    }
};

class DerivedA : virtual public Base
{
public:
    DerivedA() : Base{ 1 } {}
};

class DerivedB : virtual public Base
{
public:
    DerivedB() : Base{ 2 } {}
};

class MoreDerived : public DerivedA, public DerivedB
{
public:
    // ���z���N���X�̃R���X�g���N�^�[�Ăяo��
    MoreDerived() : Base{ 3 } {}
};

// ��`����Ă���N���X�̒��ōł��h�����Ă���N���X
class MoreMoreDerived : public MoreDerived
{
public:
    // �����ł����z���N���X�̃R���X�g���N�^�[�Ăяo��
    MoreMoreDerived() : Base{ 4 } {}
};

int main()
{
    // �ł��h�����Ă���MoreMoreDerived�ł͂Ȃ��A
    // MoreDerived�̃C���X�^���X�𐶐�����Ƃ��ɂ�
    // �ǂ̃R���X�g���N�^�[�œn�����l���o�͂����H
    MoreDerived more_derived;
}
