#include <iostream>

void show_message(int value)
{
    if (10 <= value && value < 20)
    {
        std::cout << "10�ȏ�20�����ł�" << std::endl;
    }
    else
    {
        std::cout << "10�ȏ�20�����ł͂���܂���" << std::endl;
    }
}

int main()
{
    show_message(9); // 10�����Ȃ̂�else���̃��b�Z�[�W���\�������
    show_message(15); // 10�ȏ�20�����Ȃ̂�if���̃��b�Z�[�W���\�������
    show_message(20); // 20�ȏ�Ȃ̂�else���̃��b�Z�[�W���\�������
}
