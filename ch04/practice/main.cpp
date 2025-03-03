#include <iostream>
#include "func.hpp"

namespace module{
  void show(){
    std::cout << "module::show()" << std::endl;
  }
}

void show(){
  std::cout << "global show()" << std::endl;
}

int main(){
  show();
  module::show();
  using module::show;
  show();
  
}
