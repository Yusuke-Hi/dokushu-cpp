#include <iostream>

class heap
{
    int* i;
public:
    heap() : i{ nullptr } { }

    ~heap()
    {
        delete i;
    }
    
    bool create();

    // bool�^�ɕϊ�����
    operator bool() const;
};

bool heap::create()
{
    // true/false�ɂȂ�̂ŁAif���ł��̂܂܏�������ł���
    if (*this) // bool�^�ւ̕ϊ��֐����Ă΂��
    {
        return false;
    }

    i = new int{};
    *i = 0;
    return true;
}

heap::operator bool()const
{
    return i != nullptr;
}

int main()
{
    heap h;

    if (!h)
    {
        std::cout << "�ϊ��֐���false��Ԃ��܂���" << std::endl;
    }

    std::cout << "heap::create()�Ăяo��" << std::endl;
    h.create();

    if (!h)
    {
        std::cout << "�ϊ��֐���false��Ԃ��܂���" << std::endl;
    }

    std::cout << "�I��" << std::endl;
}
