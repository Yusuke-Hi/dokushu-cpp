#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cout << "���������͂��Ă�������> ";

    std::getline(std::cin, s); // 1�s�S�̂̓���

    std::cout << "���͂��ꂽ�������\"" << s << "\"�ł�" << std::endl;
}
