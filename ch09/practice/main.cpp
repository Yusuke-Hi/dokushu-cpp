#include <iostream>
#include <string>

template <typename T>
class A
{
  T value;

public:
  A(T value) : value{value} {}
};

template <int>
class A
{
  int value;

public:
  A(int i) : value{i} {}
};

int main()
{
  A<std::string> as{"als"};
  A<int> ai{12};
}