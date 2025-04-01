#include <iostream>
#include <string>

void foo(int x, int y)
{
  std::cout << "2 args" << std::endl;
}

void foo(int x, int y, int z)
{
  std::cout << "3 args" << std::endl;
}

template <typename... T>
void func(T... args)
{
  foo(args...);
}

int main()
{
  func(2, 3);
  func(1, 2, 3);
}