#include <iostream>

#define HOGE

int main()
{
#if defined(HOGE)
    std::cout << "defined(HOGE)��true�ł��B" << std::endl; // �@
#else
    std::cout << "defined(HOGE)��false�ł��B" << std::endl; // �A
#endif
}
