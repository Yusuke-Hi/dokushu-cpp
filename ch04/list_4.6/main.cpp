#include <iostream>

class A
{
public:
    A();
    ~A();
};

A::A()
{
    std::cout << "�R���X�g���N�^�[" << std::endl;
}

A::~A()
{
    std::cout << "�f�X�g���N�^�[" << std::endl;
}

A a; // �O���[�o���ϐ�

int main()
{
    std::cout << "main()�֐�" << std::endl;
}
