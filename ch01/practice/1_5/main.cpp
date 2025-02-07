#include <iostream>

void show_value(float f)
{
    std::cout << f << std::endl;
}

int main(){
    int i = 0;

    int* p = &i;
    *p = 42;
    std::cout << i << std::endl;
}