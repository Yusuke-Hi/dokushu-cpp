#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer& operator=(const Integer& rhs);
    void show() const;
};

// �R�s�[������Z�q�̓R�s�[���̃I�u�W�F�N�g��ύX�ł��Ȃ��̂�
// const�Q�ƂŎ󂯎��
Integer& Integer::operator=(const Integer& rhs)
{
    std::cout << "�R�s�[: " << value << " -> " << rhs.value << std::endl;
    value = rhs.value; // �l���R�s�[����
    return *this;
}

void Integer::show() const
{
    std::cout << "value: " << value << std::endl;
}

int main()
{
    Integer x = 42;
    Integer y = 10;

    y = x; // �R�s�[

    y.show();
}
