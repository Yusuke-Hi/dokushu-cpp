#include <string>
#include <iostream>

int main()
{
    std::string str = "C++";
    std::cout << str.length() << std::endl;

    str.clear();
    if (str.empty())
    {
        std::cout << "empty." << std::endl;
    }
    
    str = "����";
    std::cout << str.length() << std::endl;
}
