#include <fstream>
#include <iostream>

int main()
{
    // �ǂݍ��݂݂̂̃t�@�C�����������݂ŃI�[�v�����悤�Ƃ��Ă���
    std::ofstream of{ "readonly.txt" };

    if (of.is_open()) // �t�@�C���I�u�W�F�N�g�����ۂɃI�[�v���ł����̂����m���߂�
    {
        std::cout << "�I�[�v������" << std::endl;
    }
    else
    {
        std::cout << "�I�[�v�����s" << std::endl;
    }
}
