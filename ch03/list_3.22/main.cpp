#include <iostream>

class S
{
public:
    static int num; // static�����o�[�ϐ��̐錾
};

int S::num = 123; // static�����o�[�ϐ��̒�`�Ə�����

int main()
{
    std::cout << S::num << std::endl;

    S::num = 456;

    S s;

    // ����̃C���X�^���X���o�R���Ă��A�N�Z�X�ł��邪�A���͓̂������̂��w���Ă���
    std::cout << s.num << std::endl;
}
