#include <iostream>

class A
{
    int m_v;

public:
    A(int);

    int v() const;
};

A::A(int v) : m_v(v)
{
}

int A::v() const
{
    return m_v;
}

int main()
{
    A x = 42; // A::A(int)���Ăяo���Ă���
    if (x.v() == 42)
    {
        std::cout << "A.v()��42�ł�" << std::endl;
    }
    else
    {
        std::cout << "A.v()��42�ł͂���܂���" << std::endl;
    }
}
