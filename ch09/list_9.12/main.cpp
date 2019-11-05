#include <iostream>

// �v���C�}���e���v���[�g
template <typename A, typename B, typename C>
struct Tuple
{
    A a;
    B b;
    C c;

    void show() const
    {
        std::cout << '{' << a << ", " << b << ", " << c << '}' << std::endl;
    }
};

// 2�Ԗڂ̃e���v���[�g�p�����[�^�[��void���肵���������ꉻ
template <typename A, typename C> // ���肵�Ă��Ȃ������𖄂߂邽�߂�
                                  // �e���v���[�g�p�����[�^�[
struct Tuple<A, void, C> // ���肵�Ȃ����������̓e���v���[�g�p�����[�^�[���g��
{
    A a;
    C c;

    void show() const
    {
        std::cout << '{' << a << ", " << c << '}' << std::endl;
    }
};

int main()
{
    // 2�Ԗڂ̃e���v���[�g�p�����[�^�[��void�Ȃ̂ŁA�������ꉻ���g����
    Tuple<int, void, float> t = { 42, 3.1415 };

    t.show();
}
