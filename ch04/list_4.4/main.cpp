#include <iostream>

class A
{
public:
    ~A();
};

A::~A()
{
    std::cout << "�f�X�g���N�^�[�Ăяo��" << std::endl;
}

int main()
{
    if (true)
    {
        std::cout << "if��" << std::endl;
        A a;
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "for��(" << i << ")" << std::endl;
        A a;
    }

    std::cout << std::endl;

    {
        std::cout << "�����̃X�R�[�v" << std::endl;
        A a;
    }

    std::cout << std::endl;

    std::cout << "main()�֐��̍Ō�" << std::endl;
}
