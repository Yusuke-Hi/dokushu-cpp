#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [a]() mutable
    {
        a = 42; // OK�Ba�͕ύX�\�ȏ�ԂŃR�s�[�L���v�`�������
        std::cout << "�L���v�`�������ϐ��F" << a << std::endl;
    };

    lambda();

    // �����_���̓����ŕύX�������Ă����̕ϐ��։e���͂Ȃ�
    std::cout << "���̕ϐ��F" << a << std::endl;
}
