#include <iostream>
#include <string>

int main(){
    std::string s;
    do{
        std::cout << "input string" << std::endl;
        std::getline(std::cin, s);
        std::cout << "input string is [" << s << "]" << std::endl;
    } while(s != "");
}