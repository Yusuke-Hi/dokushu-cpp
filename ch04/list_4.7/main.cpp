#include <iostream>

int count()
{
    static int counter = 0;
    return ++counter;
}

int main()
{
    std::cout << "1���: " << count() << std::endl;

    std::cout << "2���: " << count() << std::endl;

    std::cout << "3���: " << count() << std::endl;
}
