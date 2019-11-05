#include <iostream>
#include <string>

int main()
{
    std::string s0; // �i����0�́j�󕶎���
    std::cout << "s0: " << s0 << std::endl;

    std::string s1 = "Hello"; // C������
    std::cout << "s1: " << s1 << std::endl;

    std::string s2{ "Hello", 4 }; // C������ƒ���
    std::cout << "s2: " << s2 << std::endl;

    std::string s3 = s1; // std::string
    std::cout << "s3: " << s3 << std::endl;

    std::string s4(3, '?'); // �C�ӂ̐���char
    // s4{3, '?'} ��std::initializer_list<char>{3, '?'}�ɉ��߂���Ă��܂�
    std::cout << "s4: " << s4 << std::endl;

    std::string s5 = { 'a', 'b', 'c' }; // std::initializer_list<char>
    std::cout << "s5: " << s5 << std::endl;

    std::string s6{ s1.begin() + 1, s1.end() - 1 }; // �C�e���[�^�[�g
    std::cout << "s6: " << s6 << std::endl;

    std::string s7{ s1, 1, 3 }; // ������ƊJ�n�ʒu�ƒ���
    std::cout << "s7: " << s7 << std::endl;
}
