#include <iostream>
#include <string>
#include <vector>
class A
{
  int a = 0;
  public:
    A(){}
    A(int a) : a(a){}
    ~A(){
      std::cout << "A object was deleted." << std::endl;
    }

  void show();
};

void A::show(){
  std::cout << a << std::endl;
}

int main()
{
  A* ptr = new A[3] = {
    A{5},
    A{8}

  };

  for ()


  delete[] ptr;
}