#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [&a]() // a���Q�ƂŃL���v�`������
    {
        std::cout << "�L���v�`�������ϐ��F" << a << std::endl;
        ++a; // �Q�ƂŃL���v�`�������ϐ���ύX����imutable�̎w��͕s�v�j
    };

    lambda();

    // �����_���̒��ŕύX���������Ă���
    std::cout << "���̕ϐ��F" << a << std::endl;

    a = 42; // �L���v�`�����̕ϐ���ύX����
    
    // �Q�ƂŃL���v�`�����Ă���̂Ō��̕ϐ����ς��΃����_���̒��Ō�����l���ς��
    lambda();
}
