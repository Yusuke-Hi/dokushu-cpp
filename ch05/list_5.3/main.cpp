#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3 };

    int* ptr = array;

    ptr += 2; // 2�Ԗڂ̗v�f�̃A�h���X
    std::cout << *ptr << std::endl;

    ++ptr; // 3�Ԗڂ̗v�f�̃A�h���X
    std::cout << *ptr << std::endl;

    ptr -= 2; // 1�Ԗڂ̗v�f�̃A�h���X
    std::cout << *ptr << std::endl;

    --ptr; // 0�Ԗڂ̗v�f�̃A�h���X
    std::cout << *ptr << std::endl;
}
