#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <tuple>
#include <set>

int main()
{
  std::set<int> s{1, 1, 2, 2, 3, 3, 4, 4, 4, 5};

  for (auto it = s.begin(); it != s.end(); it++)
  {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}