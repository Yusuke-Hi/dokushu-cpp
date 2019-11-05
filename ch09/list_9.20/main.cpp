#include <iostream>

template <typename T>
struct A
{
    T value;
};

// ����������e���v���[�g�p�����[�^�[T�����_�����
template <typename T>
T get_value(A<T> a)
{
    return a.value;
}

int main()
{
    A<int> ai{ 42 };

    // A<int>����e���v���[�g�p�����[�^�[��int�ɐ��_�����
    std::cout << get_value(ai) << std::endl;

    A<double> ad{ 3.1415 };

    // A<double>����e���v���[�g�p�����[�^�[��double�ɐ��_�����
    std::cout << get_value(ad) << std::endl;
}
