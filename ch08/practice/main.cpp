#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
  std::string file = "sample_binary.bin";

  std::ifstream in { file, std::ios::binary};
  char buffer[100];
  in.read(buffer, sizeof(buffer));
  std::cout << buffer << std::endl;
}