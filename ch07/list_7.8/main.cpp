#include <iostream>

class Base
{
public:
    ~Base()
    {
        std::cout << "Base::~Base()" << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived::~Derived()" << std::endl;
    }
};

Base* allocate()
{
    // �h���N���X�𓮓I�m�ۂ��邪�A
    // �֐��̖߂�l�̌^�����N���X�ւ̃|�C���^�[�ɂȂ��Ă���̂�
    // �Öٕϊ��ɂ���Ċ��N���X�ւ̃|�C���^�[���Ԃ����
    return new Derived{};
}

int main()
{
    auto ptr = allocate(); // ���N���X�ւ̃|�C���^�[���Ԃ����
    delete ptr; // ���ӁB�R���p�C���ł��邪��肪����R�[�h
}
