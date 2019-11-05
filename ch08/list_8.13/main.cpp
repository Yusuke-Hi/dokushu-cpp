#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream out{ "hello_seek.txt" };

    out << "Hello, File IO" << std::endl;

    std::cout << "���݈ʒu: " << out.tellp() << std::endl;

    out.seekp(7); // 7�o�C�g�ڂɈړ�

    out << "File Seek" << std::endl; // �㏑��

    out.close();

    std::ifstream in{ "hello_seek.txt" };

    in.seekg(in.tellg() + std::streamoff{ 12 }); // ���݂̈ʒu����12�o�C�g���ɃV�[�N

    std::string line;
    std::getline(in, line);

    std::cout << line << std::endl;
}
