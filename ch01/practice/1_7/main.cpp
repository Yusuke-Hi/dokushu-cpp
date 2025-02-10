#include <iostream>
#include <string>
int main(){
    std::string str = "als;dkfj";
    for (char c : str){
        std::cout << c << std::endl;
    }
}