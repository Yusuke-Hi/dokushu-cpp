#include <iostream>

int sum_all(int* first, int* last, int val)
{
    while (first != last)
    {
        val += *first; // first���w���v�f�ɃA�N�Z�X
        ++first; // ���̗v�f��
    }

    return val;
}

int main()
{
    int array[10];
    for (int i = 0; i < 10; ++i)
    {
        array[i] = i;
    }
    
    int* first = &array[0]; // �擪�v�f���w��
    int* last = &array[10]; // �����v�f�̎����w��
    
    std::cout << sum_all(first, last, 0) << std::endl;
}
