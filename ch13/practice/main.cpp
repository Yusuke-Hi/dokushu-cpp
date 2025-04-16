#include <string>
#include <iostream>
#include <iomanip>
#include <regex>

int main()
{
  std::cout << "input str re." << std::endl;
  std::string str, re_input;
  std::cin >> str >> re_input;

  std::regex re{re_input};
  if (std::regex_match(str, re))
  {
    std::cout << "matched" << std::endl;
  }
  else
  {
    std::cout << "not matched" << std::endl;
  }
}