#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::cout << R"test(asdfasdf a
    aaaaaaaaaaasasdfasdf\ 
    
    
    fadfadfds\nfasdf
    fasddf)test"
              << std::endl;
}
