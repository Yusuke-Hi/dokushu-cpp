#include <iostream>
#include <vector>

int main()
{
    std::vector iv0 = { 1, 2, 3, 4, 5 }; // �R�s�[��
    std::vector iv1 = iv0; // �R�s�[

    for (int i : iv1)
    {
        std::cout << i << std::endl;
    }
}
