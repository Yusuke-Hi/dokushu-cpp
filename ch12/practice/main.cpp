#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <tuple>
#include <set>
#include <algorithm>
#include <iterator>

int main()
{
  std::vector<int> v = {1, 2, 3, 3, 1, 2, 5, 3, 2, 1, 4, 50};

  auto it = v.begin();

  // int count = 0;
  // for (auto num : v)
  // {
  //   if (*it == num)
  //   {
  //     count++;
  //   }
  // }

  int count = std::count(v.begin(), v.end(), v.at(0));

  std::cout << count << std::endl;
}