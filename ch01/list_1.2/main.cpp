#include <iostream>

// �����������󂯎�炸�A�����߂�l��Ԃ��Ȃ��֐�
void hello_world()
{
    std::cout << "Hello, world" << std::endl;
}

// a��b��2�������Ƃ��Ď󂯎��A�����𑫂������ʂ�\������֐�
void show_sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    hello_world(); // �����������n�����Ɋ֐����Ăяo��
    show_sum(1, 2); // a��1���Ab��2��n���Ċ֐����Ăяo��
}
