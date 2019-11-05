#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out{ "hello_eof.txt" };

    out << "Hello, EOF" << std::endl;

    out.close();

    std::ifstream in{ "hello_eof.txt" };

    char c;
    if (!in.get(c).eof())
    {
        // eof��true�ɂȂ�Ȃ���������͂ł��Ă���
        std::cout << "1�������� (in.get(c)) : " << c << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get(c))" << std::endl;
    }

    int ci = in.get();
    if (ci != EOF)
    {
        // ci��EOF�łȂ��Ȃ�L���ȕ�������͂ł���
        std::cout << "1�������� (in.get()) : "
            << static_cast<char>(ci) << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get())" << std::endl;
    }
}
