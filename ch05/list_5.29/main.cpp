#include <iostream>

class C
{
    int a;

public:
    explicit C(int a) : a{ a } { }

    void copy_and_set(int value) const // const�����o�[�֐��Ȃ̂�
    // �����o�[�ϐ��͕ύX�ł��Ȃ�
    {
        std::cout << "copy_and_set: a == " << a << std::endl;
        [*this, value] () mutable // this���w��������̃C���X�^���X���ۂ��ƃR�s�[
        {
            std::cout << "lambda: a == " << a << std::endl;
            a = value; // OK�B�������Aa�̓R�s�[���ꂽ�C���X�^���X��a��ύX����
            std::cout << "lambda: a == " << a << std::endl;
        }();
        std::cout << "copy_and_set: a == " << a << std::endl;
    }
};

int main()
{
    C c{ 42 };
    c.copy_and_set(0);
}
