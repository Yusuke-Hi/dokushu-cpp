#include <iostream>
#include <string>

// �w���p�[�N���X�̑O���錾
template <typename T>
class helper;

// int�̂Ƃ��Ɏg����w���p�[�N���X
template <>
class helper<int>
{
public:
    static std::string name() { return "int"; }
};

// double�̂Ƃ��Ɏg����w���p�[�N���X
template <>
class helper<double>
{
public:
    static std::string name() { return "double"; }
};

template <typename T>
struct A
{
    T value;
};

template <typename T>
void deduce(A<T> a)
{
    // ���_���ꂽT���g���ăw���p�[�N���X��static�����o�[�֐����Ăяo��
    std::cout << helper<T>::name() << std::endl;
}

int main()
{
    A<int> ai;

    deduce(ai); // ai���琄�_�����T��\������

    A<double> ad;

    deduce(ad); // ai���琄�_�����T��\������
}
