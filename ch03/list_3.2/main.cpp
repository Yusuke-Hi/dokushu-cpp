#include <iostream>

class product
{
    int id; // ���iID

public:
    int get_id(); // ��const�����o�[�֐�
    int get_id() const; // const�����o�[�֐�
};

int product::get_id()
{
    std::cout << "��const�����o�[�֐���get_id()���Ă΂�܂����B" << std::endl;
    return id;
}

int product::get_id() const
{
    std::cout << "const�����o�[�֐���get_id()���Ă΂�܂����B" << std::endl;
    return id;
}

int main()
{
    product p;
    p.get_id(); // ��const�����o�[�֐����Ă΂��

    const product cp{};
    cp.get_id(); // const�����o�[�֐����Ă΂��
}
