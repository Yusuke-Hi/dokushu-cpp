#include <iostream>

class A
{
public:
    A()
    {
        // �R���X�g���N�^�[�ŗ�O�𓊂���
        throw 0;
    }
};

int main()
{
    try
    {
        // �R���X�g���N�^�[�œ�����ꂽ��O��new���Z�q��ʂ��ē�������
        A* ptr = new A;
        
        // �c�c // �����̏���
        
        delete ptr;
    }
    catch (int e)
    {
        // �I�u�W�F�N�g�̂��߂Ɋm�ۂ���Ă����̈�͎����ŉ������邽�ߓ��ʂȏ����͕s�v
        std::cout << "��O���������܂��� �l = " << e << std::endl;
    }
}
