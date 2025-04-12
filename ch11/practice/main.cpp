#include <iostream>
#include <typeinfo>

class Base
{
public:
  virtual ~Base() {}
};

class Derived : public Base
{
};

class MoreDerived : public Derived
{
};

int main()
{
  Derived da;
  Base *pbase = &da;

  auto *pmd = dynamic_cast<MoreDerived *>(pbase);
  if (pmd)
  {
    std::cout << "ok" << std::endl;
  }
  else
  {
    std::cout << "failed" << std::endl;
  }

  auto *pd = dynamic_cast<Derived *>(pbase);
  if (pd)
  {
    std::cout << "ok" << std::endl;
  }
  else
  {
    std::cout << "faild" << std::endl;
  }
}