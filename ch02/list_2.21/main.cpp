#include <iostream>

int main()
{
    int a = 0;

    float b = 3.14f; // �ϐ�b�̓����_���̒��Ŏg���Ă��Ȃ��̂ŃR�s�[����Ȃ�

    auto lambda = [=]() // �f�t�H���g�̃L���v�`��
    {
        // OK�Ba���g���Ă���̂ŁA�R���p�C���[�������I��a���R�s�[����
        std::cout << a << std::endl;
    };

    lambda();
}
