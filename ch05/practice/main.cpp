#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
class A
{
  int memberA = 10;
  public:
    int& get_memberA(){
      return memberA;
    }

    const int& get_memberA() const{
      return memberA;
    }
};

int main()
{
  A a;

  int& memberA = a.get_memberA();

  const int& memberA_ = a.get_memberA();

  std::cout << memberA_ << std::endl;

  memberA = 50;
  std::cout << memberA << std::endl;
  std::cout << memberA_ << std::endl;

}