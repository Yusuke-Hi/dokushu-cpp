#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ "BRA" }; // BRA���܂�
    std::string input = "ABRACADABRA";

    if (std::regex_search(input, re))
    {
        std::cout << "�}�b�`���܂����I " << std::endl;
    }
}
