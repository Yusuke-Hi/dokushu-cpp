#include <iostream>

int main()
{
    int* ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "ptr�̓k���|�C���^�[�ł�" << std::endl;
    }
    else
    {
        *ptr = 42;
    }
}
