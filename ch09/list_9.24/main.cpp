#include <iostream>

// ���Ӓl���󂯎��e���v���[�g
template <typename T>
void foo(T& value)
{
    std::cout << "void foo(T& value)" << std::endl;
}

// �E�Ӓl���󂯎��e���v���[�g
template <typename T>
void foo(T&& value)
{
    std::cout << "void foo(T&& value)" << std::endl;
}

int main()
{
    int i = 0;

    foo(i);
    
    foo(0);
}
