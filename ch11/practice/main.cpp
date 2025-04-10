#include <iostream>
#include <typeinfo>

class Base
{
public:
  virtual ~Base();
};

class DerivedA : public Base
{
};

class DerivedB : public Base
{
};

void check_class(Base &base)
{
  if (typeid(DerivedA) == typeid(base))
  {
    std::cout << "DerivedA" << std::endl;
  }
  else if (typeid(DerivedB) == typeid(base))
  {
    std::cout << "DerivedB" << std::endl;
  }
  else
  {
    std::cout << "something else" << std::endl;
  }
}

int main()
{
  Base base;
  check_class(base);

  DerivedA derived_a;
  check_class(derived_a);

  DerivedB derived_b;
  check_class(derived_b);
}