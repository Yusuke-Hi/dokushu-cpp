#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <tuple>

int main()
{
  std::tuple<int, std::string, int> t{1, "hokj", 42};

  std::get<2>(t) = 54;

  std::cout << std::get<2>(t) << std::endl;
}