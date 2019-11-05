#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out{ "hello_eof.txt" };

    out << "Hello, EOF";

    out.close();

    std::ifstream in{ "hello_eof.txt" };

    std::string line;
    // 1�s�ǂݍ��݁i���̃t�@�C����1�s�����Ȃ̂ł���ł��ׂēǂݏI���j
    std::getline(in, line);

    std::cout << line << std::endl;
    std::cout << "�t�@�C�������H " << std::boolalpha << in.eof() << std::endl;
}