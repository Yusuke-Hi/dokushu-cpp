#include <string>
#include <iostream>

int main()
{
    std::string str{ "Hello\0world", 11 };
    std::cout << str << std::endl; // Helloworld ���o�͂����

    for (char ch : str) // Hello_world ���o�͂����
    {
        std::cout << (ch == '\0' ? '_' : ch);
    }
    std::cout << std::endl;
}
