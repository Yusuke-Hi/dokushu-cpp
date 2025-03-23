#include <iostream>

int main(){
  char buffer[256];

  while(true){
    std::cout << "input text." << std::endl;
    std::cin.getline(buffer, 256);
    if (buffer[0] == '\0'){
      break;
    }
    std::cout << buffer << std::endl;
  }
  
}