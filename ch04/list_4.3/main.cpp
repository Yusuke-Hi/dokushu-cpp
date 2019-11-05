#include <iostream>

class A
{
public:
    ~A();
};

A::~A()
{
    std::cout << "�f�X�g���N�^�[�Ăяo��" << std::endl;
}

void function_scope(int i)
{
    A a; // �֐��X�R�[�v���甲����ƃf�X�g���N�^�[���Ă΂��
    std::cout << "�֐��X�R�[�v" << std::endl;
    
    if (i > 0)
    {
        return; // �֐��̏�������������Ăяo�����Ɉڂ�
    }
    
    std::cout << "if���̂���" << std::endl;
}

int main()
{
    // if���̏�����true�ƂȂ�̂�return���Ŗ߂��Ă���
    function_scope(10);

    std::cout << std::endl;

    // if���̏�����false�ƂȂ�̂Ŋ֐��X�R�[�v�̏I���ɂ��ǂ蒅��
    function_scope(-10);
}
