#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [a]()
    {
        // OK�B�ϐ�a�̃R�s�[�������_�������ɑ��݂���
        std::cout << a << std::endl;
    };
    
    lambda(); // �R�s�[�����Ƃ���a�̒��g���\�������
    
    // �����_���̓R�s�[�������Ă���̂ŁA���̕ϐ����ύX����Ă�
    // �R�s�[�̒��g�͕ς��Ȃ�
    a = 42;
    
    lambda(); // �R�s�[�����ϐ��͉e�����󂯂Ȃ�
}
