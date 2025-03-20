#include <iostream>
#include <string>

template<typename T>
void print(T x){
  std::cout << x << std::endl;
}

class Base{
  public:
    Base(){
      print("Base constructor.");
    }
    Base(int n){
      print("Base constructor n -> ");
      print(n);
    }
    ~Base(){
      print("Base destructor.");
    }
};

class Derived: public Base{
  public:
    Derived(){
      print("Derived constructor");
    }
    Derived(int n): Base{n}{
      print("Derived constructor n -> Base");
    }
    ~Derived(){
      print("Derived destructor");
    }
};

int main(){
  Derived d;
  Derived d2{42};
}