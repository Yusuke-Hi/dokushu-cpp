#include <iostream>
#include <string>

int main()
{
    std::string str = "abc";

    // C��������擾
    const char* c_str = str.c_str();

    int pos = 0;
    while (true)
    {
        // �����ɂ͕K���k������������
        if (c_str[pos] == '\0')
        {
            std::cout << "[\\0]" << std::endl;
            break;
        }
        else
        {
            std::cout << c_str[pos] << std::endl;
        }
        ++pos;
    }
}
