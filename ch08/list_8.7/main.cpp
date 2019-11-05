#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream out;

    // �e�L�X�g���[�h�ŏ����o���p�i�Öفj�ɋ�ɂ��Ă���I�[�v��
    out.open("hello_file.txt", std::ios::out | std::ios::trunc);

    out << "Hello, File IO" << std::endl;

    out.close();

    // �e�L�X�g���[�h�œǂݍ��ݗp�i�����j�ɃI�[�v��
    std::ifstream in{ "hello_file.txt", std::ios::in };

    std::string line;
    std::getline(in, line);

    std::cout << line << std::endl;
}
