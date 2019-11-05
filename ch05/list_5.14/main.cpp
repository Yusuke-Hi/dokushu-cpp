#include <string>

class A
{
    int m_v;
    std::string m_n;
public:
    A(int, std::string);
    A(float);
};

A::A(int v, std::string n)
    : m_v(v)
    , m_n{ n } // �@ OK�B�����o�[���������X�g�ł�{}���g�����Ƃ��ł���
{
}

A::A(float)
    : A{ -1, "float" } // �A OK�B�Ϗ��R���X�g���N�^�[�ł�{}���g�����Ƃ��ł���
{
}

int main()
{
    A ap(42, "0"); // �B ���ʂ�()���g��
    A ab{ 42, "0" }; // �C OK�B()�̑����{}���g�����Ƃ��ł���
    
    A bp = A(42, "0"); // �D OK�B�֐��`���̖����I�Ȍ^�ϊ�
    A bb = A{ 42, "0" }; // �E OK�Bbp�̏������Ɠ���
    
    A cp = (42, "0"); // �F �G���[�BA(int, std::string)�̌Ăяo���ɂ͂Ȃ�Ȃ�
    A cb = { 42, "0" }; // �G OK�Bbb�̏������Ɠ���
    
    A dp = (42, 0.0); // �H �v���ӁBA(int, std::string)�ł͂Ȃ���A(float)���Ă΂��
    A db = { 42, 0.0 }; // �I �G���[�Bdouble����std::string�ւ̕ϊ��͂ł��Ȃ�
    
    double pi = 3.1415926536;
    A ep(pi); // �J OK����double����float�ւ̈Öٕϊ����s����
    A eb{ pi }; // �K �G���[�Bdouble����float�ւ͈��S�ɕϊ��ł��Ȃ�
}
