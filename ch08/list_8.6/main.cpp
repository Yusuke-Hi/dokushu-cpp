#include <iostream>
#include <iomanip>
#include <fstream> // �t�@�C���̓��o�͂ɂ�<fstream>�w�b�_�[���g�p����
#include <string>

int main()
{
    std::ofstream out; // �t�@�C���o�͗p�̃I�u�W�F�N�g���쐬����
    out.open("hello_file.txt"); // �t�@�C�����I�[�v������

    out << "Hello, File IO" << std::endl; // �t�@�C���ɕ�������o�͂���
    out << std::setprecision(4) << std::scientific << 12.34567f << std::endl;

    out.close(); // ���삪�I������̂ŃN���[�Y

    // ���͗p�̃I�u�W�F�N�g���쐬����̂Ɠ����ɃI�[�v�����ł���iofstream�ł������j
    std::ifstream in{ "hello_file.txt" };

    std::string line;
    std::getline(in, line); // �t�@�C������1�s���͂���
    float f;
    in >> f;

    std::cout << line << std::endl; // �t�@�C������ǂݍ���1�s����ʂɏo�͂���
    std::cout << f << std::endl; // �ǂݍ��񂾕��������_�����o��

    // in.close(); ���Ă΂Ȃ��Ă��A�f�X�g���N�^�[�������ŃN���[�Y����
}
