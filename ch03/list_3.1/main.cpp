#include <iostream>

class product
{
    int id; // ���iID

public:
    int get_id() const;
    void set_id(int new_id);
};

// getter��const�����o�[�֐��ƂȂ��Ă����ق����s�����悢
int product::get_id() const
{
    return id;
}

// setter��const�����o�[�֐��ɂ��Ȃ�
void product::set_id(int new_id)
{
    id = new_id;
}

int main()
{
    const product cp{}; // ����{}�ɂ��Ă�5.5�߂ŉ��

    // OK�Bconst�����o�[�֐���const�ȃC���X�^���X�ɑ΂��ČĂяo����
    std::cout << cp.get_id() << std::endl;
}
