#include <string>
#include <iostream>
#include <iomanip>

int main()
{
  std::string pi = "3.14159265";
  std::cout << std::setprecision(9) << std::stod(pi) << std::endl;
}