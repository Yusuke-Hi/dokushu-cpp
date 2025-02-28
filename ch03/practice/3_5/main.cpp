#include <iostream>
class A{
  public:
    virtual void show();
};

void A::show(){
  std::cout << "This is A::show()" << std::endl;
}

class B: public A{
  public:
    using A::show;
    void show(int value);
};

void B::show(int value){
  std::cout << "This is B::show(): " << value << std::endl;
}

int main (){

  B b;
  b.show();
  b.show(10);
}