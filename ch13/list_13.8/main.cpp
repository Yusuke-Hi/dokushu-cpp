#include <iostream>
#include <string>

int main()
{
    std::string s0;

    s0.assign("Hello"); // C������
    std::cout << "s0: " << s0 << std::endl;

    s0.assign("Hello", 4); // C������ƒ���
    std::cout << "s0: " << s0 << std::endl;

    std::string s1 = "Hello";
    s0.assign(s1); // std::string
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(3, '?'); // �C�ӂ̐���char
    std::cout << "s0: " << s0 << std::endl;

    // std::initializer_list<char>
    s0.assign({ 'a', 'b', 'c' });
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(s1.begin() + 1, s1.end() - 1); // �C�e���[�^�[�g
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(s1, 1, 3); // ������ƊJ�n�ʒu�ƒ���
    std::cout << "s0: " << s0 << std::endl;
}
