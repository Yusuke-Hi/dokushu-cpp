#include <iostream>

// �Ăяo����邽�тɃJ�E���g���Č��ݒl��Ԃ��J�E���^�[�N���X
class Counter
{
    int value;

public:
    Counter() : value{ 0 } {}

    int operator()(); // �������󂯎��Ȃ��֐��Ăяo�����Z�q�̃I�[�o�[���[�h
    int operator()(int n); // ������1�̊֐��Ăяo�����Z�q�̃I�[�o�[���[�h

    void show() const;
};

// �������Ȃ��Ƃ��ɂ̓C���N�������g���č��̃J�E���^�[�l��Ԃ�
int Counter::operator()()
{
    return ++value;
}

// �����ŋ�̓I�ȑ����l���^����ꂽ�Ƃ��ɂ͂��̐���������������
int Counter::operator()(int n)
{
    return value += n;
}

void Counter::show() const
{
    std::cout << "Counter.value = " << value << std::endl;
}

int main()
{
    Counter c;

    c();
    c();
    c();
    c(-3);

    c.show();
}
