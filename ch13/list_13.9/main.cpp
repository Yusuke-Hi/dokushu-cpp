#include <string>
#include <iostream>

int main()
{
    std::string str = "123";
    for (std::string::size_type i = 0;
        i < str.length(); // length()�͍\������char�̐���Ԃ��i13.3.5�Q�Ɓj
        ++i)
    {
        std::cout << str[i];
    }
    std::cout << std::endl; // "123"

    char ch = 'a';
    for (std::string::size_type i = 0; i < 10; ++i)
    {
        try
        {
            str.at(i) = ch++;
        }
        catch (std::out_of_range & err)
        {
            std::cerr << "Oops..." << err.what() << std::endl;
            break;
        }
    }
    std::cout << str << std::endl; // "abc"
}
