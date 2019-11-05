#include <iostream>

template <typename... T>
void count_params(T... args)
{
    std::cout << "�e���v���[�g�p�����[�^�[�p�b�N�̗v�f���� " << sizeof...(T)
        << std::endl;
    std::cout << "�֐��p�����[�^�[�p�b�N�̗v�f���� " << sizeof...(args)
        << std::endl;
}

int main()
{
    count_params(0);

    count_params(1, 2, 3);
}
