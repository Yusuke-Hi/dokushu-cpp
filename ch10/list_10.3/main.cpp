#include <iostream>

int main()
{
    throw 0; // �N��catch���Ȃ���O
    
    // std::terminate()���Ă΂�ăv���O�����������I������
    // ����ȍ~�̏����͎��s����Ȃ�

    std::cout << "throw�̂���" << std::endl;
}
