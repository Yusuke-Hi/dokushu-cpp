#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{ "hello_error.txt" };

    while (in.good())
    {
        in.get();
        auto state = in.rdstate();
        if (state & std::ios::eofbit)
        {
            std::cout << "EOF�ɓ��B���܂���" << std::endl;
        }
        else if (state & std::ios::failbit)
        {
            std::cout << "�v���I�ł͂Ȃ��G���[��������܂���" << std::endl;
        }
        else if (state & std::ios::badbit)
        {
            std::cout << "�v���I�ȃG���[��������܂���" << std::endl;
        }
    }
}
