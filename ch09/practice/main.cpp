#include <iostream>
#include <string>

template <typename T>
class A
{
public:
  void func()
  {
    std::cout << "A<T>::func()" << std::endl;
  }
};

template <typename T>
void call(A<T> a)
{
  a.func();
}

int main()
{
  A<int> ai;
  call(ai);

  A<std::string> as;
  call(as);
}