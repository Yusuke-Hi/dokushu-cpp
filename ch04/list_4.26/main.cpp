#include <iostream>

#define PLUS(a, b) (a + b) // ���Z������֐��`���}�N��
#define HOGE

int main()
{
#if PLUS(defined(HOGE), 0)
    std::cout << "PLUS(defined(HOGE), 0)��true�ł��B" << std::endl; // �@
#else
    std::cout << "PLUS(defined(HOGE), 0)��false�ł��B" << std::endl; // �A
#endif
}
