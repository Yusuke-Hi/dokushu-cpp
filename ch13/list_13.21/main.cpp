#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ R"(A\w*A)" }; // A�Ŏn�܂�A�C�ӂ̐��̉p�����������AA�ŏI���
    std::string input = "ABRACADABRA";

    if (std::regex_match(input, re))
    {
        std::cout << "�}�b�`���܂����I " << std::endl;
    }
}
