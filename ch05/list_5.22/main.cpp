#include <iostream>

int main()
{
    int&& i = 1; // 1�ւ̉E�Ӓl�Q��
    i = 0; // OK�Bi�͍��Ӓl

    if (1 == 0) // 1 == 0�ƂȂ��Ă��܂����̂��H
    {
        std::cout << "1 == 0" << std::endl;
    }

    else
    {
        std::cout << "1 != 0" << std::endl;
    }
}
