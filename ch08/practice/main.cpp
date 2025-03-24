#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
  int num = 12345;
  std::cout << std::hex << std::setw(16) << std::left << std::setfill('=') 
    << 0xdeadbeaf << std::endl;
}