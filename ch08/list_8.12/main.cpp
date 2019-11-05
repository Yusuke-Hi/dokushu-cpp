#include <fstream>
#include <iostream>

int main()
{
    std::ofstream out{ "hello_binary.bin", std::ios::binary };

    const char value[] = { 0, 1, 2 };
    out.write(value, sizeof(value)); // 3�o�C�g������������

    out.close();

    std::ifstream in{ "hello_binary.bin", std::ios::binary };

    char buffer[10];
    in.read(buffer, 10); // 10�o�C�g�ǂݍ������Ƃ���

    std::cout << in.gcount() << std::endl; // ���ۂɓǂݍ��񂾃o�C�g��
}
