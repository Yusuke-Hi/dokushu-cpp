#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

void clear(int& num){
  std::cout << "reference: " << num << std::endl;
}

void right(int&& num){
  std::cout << "right: " << num << std::endl;
}

int main(){
  int a = 100;
  clear(a);
  right(std::move(a));
}