#include <iostream>

int main()
{
    int a = 2;
    switch (a + 1)
    {
    case 1:
        std::cout << "a + 1��1�ł�" << std::endl;
        break;
    case 2:
        std::cout << "a + 1��2�ł�" << std::endl;
        break;
    default:
        std::cout << "a + 1��1�ł�2�ł�3�ł�����܂���" << std::endl;
        break;
    case 3:
        std::cout << "a + 1��3�ł�" << std::endl;
        break;
    }
}
