#include <iostream>

void hello()
{
    std::cout << "hello, macro" << std::endl;
}

#define id(name) name // �����Ŏ󂯎�������̂ɂ��̂܂ܒu��������

int main()
{
    id(hello)(); // �֐��Ăяo���̂悤�Ɋ֐��`���}�N��id���Ăяo��
}
