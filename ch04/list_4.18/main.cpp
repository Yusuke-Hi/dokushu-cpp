#include <iostream>

namespace // �������O���
{
    void say_hello()
    {
        std::cout << "Hello, anonymous namespace" << std::endl;
    }
}

int main()
{
    say_hello(); // �������O��Ԃ͖��O��Ԃ̎w�肪�Ȃ�
}