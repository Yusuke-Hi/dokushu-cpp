#include <iostream>
class A
{
    int i;
public:
    // �R���X�g���N�^�[�̐錾�ƒ�`
    A() : i(0) { }
    // �����o�[�֐��̐錾�ƒ�`
    void set_i(int i)
    {
        this->i = i;
    }
    // const�����o�[�֐�����`�ł���
    void show() const
    {
        std::cout << i << std::endl;
    }
};
int main()
{
    A a;
    a.show();
    a.set_i(123);
    a.show();
}