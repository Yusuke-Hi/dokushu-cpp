#include <iostream>
#include <string>

int main()
{
    // 2�̕��������������FC++
    std::string strA = "Hello, ";
    std::string strB = "world.";

    std::string strC = strA + strB; // ����
    std::cout << strC << std::endl;

    if (strC == "Hello, world.") // ��r
    {
        std::cout << "ok." << std::endl;
    }
    // �m�ۂ��ꂽ�̈�͎����I�ɉ�������
}
