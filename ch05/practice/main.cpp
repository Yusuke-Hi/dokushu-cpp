#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
class A
{
    int *memberA;
  public:
    A();
    A(const A& other); 
    A(A&& other);
    ~A();

    void set(int memberA){
      this->memberA = memberA;
    }
};
A::A() : memberA{new int[100]} {
  std::cout << "default constructor" << std::endl;
}
A::A(const A& other) : memberA(other.memberA){
  std::cout << "copy constructor" << std::endl;
}
A::A(A&& other) : memberA(other.memberA){
  other.memberA = nullptr;
}

A::~A(){
  delete[] memberA;
}

int main()
{
  A a;
  a.set(42);

  A b{a};
  A c{std::move(a)};

}