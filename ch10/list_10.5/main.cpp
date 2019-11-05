#include <iostream>

void show_message(const char* message)
{
    std::cout << message << std::endl;
    throw 0;
}

void echo_message()
{
    // 99�����܂œ���o�b�t�@�[��p�ӂ��ĕW�����͂���̃��b�Z�[�W��ǂݍ���
    char* buffer = new char[100];

    std::cin.get(buffer, 100);

    try
    {
        // ��O���������邩������Ȃ�����
        show_message(buffer);
    }
    catch (...)
    {
        std::cout << "��O��߂܂��܂��� (echo_message)" << std::endl;
        delete[] buffer; // �o�b�t�@�[���������

        throw; // ��O�̍đ��o
               // ��̓I�ȗ�O�I�u�W�F�N�g�ɂ��Ēm��Ȃ��Ă��đ��o�ł���
    }
    delete[] buffer;
}

int main()
{
    try
    {
        echo_message();
    }
    catch (int e)
    {
        std::cout << "int�^�̗�O��߂܂��܂��� (main)" << std::endl;
    }
    catch (...)
    {
        std::cout << "��O��߂܂��܂��� (main)" << std::endl;
    }
}
