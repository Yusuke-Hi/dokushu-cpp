#include <iostream>

int main()
{
    int array[5] = { 0, 1, 2, 3, 4 };;

    int(*ptr)[5] = &array; // �z��ւ̃|�C���^�[

    for (int e : *ptr) // �|�C���^�[�Ȃ̂ŊԐڎQ�Ɖ��Z�q���K�v
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    int(&ref)[5] = array; // �z��ւ̎Q��

    for (int e : ref) // �Q�ƂȂ̂ŊԐڎQ�Ɖ��Z�q�͕s�v
    {
        std::cout << e << std::endl;
    }
}
