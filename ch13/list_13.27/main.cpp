#include <string>
#include <iostream>
#include <regex>

int main()
{
    std::regex re{ "(.)����" };

    std::string input = "�������������������̂���";
    std::string fmt = "$1���ǂ�";
    std::string output;

    // �u��
    std::regex_replace(std::back_inserter(output), // �o�͐�
        input.begin(), // ���͂̐擪
        input.end(), // ���̖͂���
        re, // ���K�\��
        fmt); // �u���t�H�[�}�b�g

    std::cout << output << std::endl;
}
