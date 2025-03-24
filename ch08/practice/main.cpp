#include <iostream>
#include <iomanip>

int main(){
  int num = 1234;
  std::cout << std::right << std::oct 
  << std::setw(8) << std::setfill('0') << num << std::endl;
}