#include <memory>
#include <utility>
#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "�R���X�g���N�^�[" << std::endl;
    }

    ~A()
    {
        std::cout << "�f�X�g���N�^�[" << std::endl;
    }
};

std::unique_ptr<A> allocate()
{
    std::cout << "allocate()" << std::endl;
    std::unique_ptr<A> ptr{ new A{} };

    // �������̈�̏��L����߂�l�Ƃ��Ċ֐��X�R�[�v�̊O���Ɉړ�����
    return std::move(ptr);
}

int main()
{
    {
        std::unique_ptr<A> ptr; // ���std::unique_ptr�Bnullptr�ŏ����������

        std::cout << "�֐��Ăяo���̑O" << std::endl;

        ptr = allocate(); // allocate()���m�ۂ����������̈�̏��L�����󂯎��

        std::cout << "�֐��Ăяo���̂���" << std::endl;
    }
    std::cout << "�X�R�[�v�̂���" << std::endl;
}
