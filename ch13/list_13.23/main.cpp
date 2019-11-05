#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ "(A.*)C(.*A)" }; // A�Ŏn�܂�C�������A�ŏI���
    std::string input = "ABRACADABRA";
    std::smatch match;

    if (std::regex_match(input, match, re))
    {
        for (std::size_t i = 0; i < match.size(); ++i)
        {
            std::cout << match.str(i)
                << " position = " << match.position(i)
                << " length = " << match.length(i)
                << std::endl;
        }
    }
}
