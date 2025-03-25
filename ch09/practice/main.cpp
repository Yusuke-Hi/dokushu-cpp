#include <iostream>
#include <string>


template <typename T>
T func(T x){
  return x;
}

int main(){

  std::cout << func<int>(5) << std::endl;
  std::cout << func<std::string>("dadsf") << std::endl;
}