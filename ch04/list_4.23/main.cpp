#include <iostream>

void hello()
{
    std::cout << "hello, world" << std::endl;
}

void goodbye()
{
    std::cout << "goodbye, world" << std::endl;
}

int main()
{
    hello(); // �}�N������`�����O�͉����u�������Ȃ�

    std::cout << "hello, macro" << std::endl;

#define hello goodbye // hello��goodbye�ɒu��������}�N��

    hello(); // �}�N����hello��goodbye�ɒu��������

    // ������̒��Ɍ����͎̂��ʎq�ł͂Ȃ��̂Ń}�N���Œu�������Ȃ�
    std::cout << "hello, macro" << std::endl;
}
