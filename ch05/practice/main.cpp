#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

int myadd(int a, int b){
  return a + b;
}

int main()
{
  int (*func)(int, int) = &myadd;
  std::cout << func(90, 18) << std::endl;

  int (&func_)(int, int) = myadd;
  std::cout << func(49, 22) << std::endl;
}