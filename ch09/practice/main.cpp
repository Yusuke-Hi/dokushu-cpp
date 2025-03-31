#include <iostream>
#include <string>

template <typename T>
void func(T &&value)
{
  std::cout << value << std::endl;
}

int main()
{
  const int i = 19;
  func(i);
  func(623);
}