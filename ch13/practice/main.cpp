#include <string>
#include <iostream>
#include <iomanip>
#include <regex>

int main()
{
  int x = 951;
  std::string str = std::to_string(x);
  int y = stoi(str);

  std::cout << x << std::endl;
  std::cout << str << std::endl;
  std::cout << y << std::endl;
}