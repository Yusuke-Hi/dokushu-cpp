#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "apple";

    // s�̐擪���疖�������ɁAstd::vector�𐶐�����
    std::vector<char> cv{ s.begin(), s.end() };

    for (char c : cv)
    {
        std::cout << c << std::endl;
    }
}
