#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
}

// 2�̐������󂯎���Ă����̘a��Ԃ��֐�sum()
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// 3�̐������󂯎���Ă��ׂĂ̘a��Ԃ��֐�sum()�̃I�[�o�[���[�h
int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

int main()
{
    int x = sum(10, 20); // 2�����ł̃I�[�o�[���[�h���Ăяo��
    show_value(x);

    int y = sum(5, 15, 25); // 3�����ł̃I�[�o�[���[�h���Ăяo��
    show_value(y);
}
