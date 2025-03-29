#include <iostream>
#include <string>

// primary
template <typename T>
class A
{
public:
  void method(T value)
  {
    std::cout << "this is primary. " << value << std::endl;
  }
};

template <>
class A<int>
{
public:
  void method(int value)
  {
    std::cout << "this is specialization. " << value << std::endl;
  }
};

template <>
class A<void>
{
public:
  void method(void)
  {
    std::cout << "this is void. " << std::endl;
  }
};

int main()
{
  A<float> af;
  af.method(1.25);

  A<int> ai;
  ai.method(50);

  A<void> av;
  av.method();
}