#include <iostream>

int main()
{
    int a = 2;
    switch (a)
    {
    case 1: // FALL THROUGH !!
    case 2: // FALL THROUGH !!
    case 3:
        std::cout << "a��1��2��3�ł�" << std::endl;
        return 0;
    }
    std::cout << "�c��̏���" << std::endl;
}
