#include <iostream>
#include <string>

template<typename T>
void print(T x){
  std::cout << x;
}

class Base{
  public:
    Base(std::string s){
      print("Base constructor: ");
      print(s);
      print("\n");
    }
    virtual ~Base(){
      print("Base destructor");
    }

    void virtual method(){
      print("mehtod: Base\n");
    }
};

class DerivedA: virtual public Base{
  public:
  DerivedA(): Base{"DerivedA"} {}
  ~DerivedA(){
    print("Derived destructor");
  }
  void method() override{
    print("mathod: DerivedA\n");
  }
};

int main(){
  DerivedA da;

  da.method();
}