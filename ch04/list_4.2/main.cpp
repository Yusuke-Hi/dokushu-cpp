#include <iostream>

std::string get_message(); // �֐��̑O���錾

int main()
{
    auto msg = get_message(); // ��`���܂��Ȃ��Ă��֐��Ăяo�����ł���
    std::cout << msg << std::endl;
}

// �֐��̎��ۂ̒�`
std::string get_message()
{
    return "Hello, forward declaration";
}
