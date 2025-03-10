#include <iostream>

int main()
{
    int&& i = 1; // 1への右辺値参照
    std::cout << i << std::endl;
    i = 0; // OK。iは左辺値
    std::cout << i << std::endl;

    if (1 == 0) // 1 == 0となってしまったのか？
    {
        std::cout << "1 == 0" << std::endl;
    }

    else
    {
        std::cout << "1 != 0" << std::endl;
    }
}
