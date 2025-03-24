#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out{ "hello_error.txt" };
    out << "this is a sample." << std::endl;
    out.close();

    std::ifstream in{ "hello_error.txt" };

    int count = 1;
    while (in.good())
    {
        std::cout << count++ << std::endl;
        in.get();
        auto state = in.rdstate();
        if (state & std::ios::eofbit)
        {
            std::cout << "EOFに到達しました" << std::endl;
        }
        else if (state & std::ios::failbit)
        {
            std::cout << "致命的ではないエラーが見つかりました" << std::endl;
        }
        else if (state & std::ios::badbit)
        {
            std::cout << "致命的なエラーが見つかりました" << std::endl;
        }
    }
}
