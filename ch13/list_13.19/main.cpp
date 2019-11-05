#include <regex>
#include <string>
#include <iostream>

int main()
{
    std::regex re{ "a.*e" }; // ���K�\���F'a'�Ŏn�܂�'e'�ŏI���
    std::string input = "delicious applepie and banana";
    std::smatch match;

    // input����re�Ŏ����ꂽ�p�^�[���Ƀ}�b�`����ӏ���������
    // ���ʂ�match�ɋ��߂���
    if (std::regex_search(input, match, re))
    {
        std::cout << match.str() // �}�b�`�����������
            << " pos = " << match.position() // ���̈ʒu�����
            << " len = " << match.length() // ����
            << std::endl;
    }
}
