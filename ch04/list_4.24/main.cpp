#include <iostream>

void hello()
{
    std::cout << "hello, macro" << std::endl;
}

void goodbye()
{
    std::cout << "goodbye, macro" << std::endl;
}

int main()
{
#define hello goodbye // hello��goodbye�ɒu��������}�N��

    hello(); // �}�N���ɂ��goodbye()�ɒu����������

#undef hello // hello�̃}�N����`������

    hello(); // hello�}�N���̒�`���Ȃ��Ȃ����̂Œu�������͋N���炸hello()���Ă΂��
}
