#include <iostream>
#include <string>

int main(){
    char str [] = "hoge\0";
    std::cout << str << std::endl;

    std::string st = "hoge\0hadsf";
    std::cout << st << std::endl;
}