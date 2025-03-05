#include <iostream>
#include <string>
#include "func.hpp"

namespace A_ns{
  namespace B_ns{
    namespace C_ns{
      void show_msg(std::string msg){
        std::cout << msg << std::endl;
      }
    }
  }
}

namespace abc = A_ns::B_ns::C_ns;

void show(){
  std::cout << "show()" << std::endl;
}

void show_(){
  std::cout << "show_()" << std::endl;
}

int main(){
  show();

#define show show_ 
  show();

  A a;
  int value = 5;
  std::cout << "value: " << value << ", value + 1: " << a.next(value) << std::endl;

  A_ns::B_ns::C_ns::show_msg("hello, namespace");
  abc::show_msg("hello, abc");

  
}
