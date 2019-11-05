#include <iostream>
#include <utility> // std::move
void show_value_category(int& value)
{
    std::cout << "�Q��" << std::endl;
}
void show_value_category(int&& value)
{
    std::cout << "�E�Ӓl�Q��" << std::endl;
}

template <typename T>
void forward(T&& value)
{
    // ���S�]��
    show_value_category(std::forward<T>(value));
}

int main()
{
    int i = 0;
    forward(i);
    forward(0);
}
