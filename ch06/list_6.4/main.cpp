#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer& operator++(); // �O�u�C���N�������g���Z�q
    Integer& operator--(); // �O�u�f�N�������g���Z�q

    // ��u�͑�2����int�^���󂯎��֐��Ƃ��ăI�[�o�[���[�h
    Integer operator++(int); // ��u�C���N�������g���Z�q
    Integer operator--(int); // ��u�f�N�������g���Z�q
    
    void show() const;
};

Integer& Integer::operator++()
{
    // �O�u�͕ύX�������Ƃ̒l�i�܂莩�����g�j��Ԃ��̂ŁA
    // �����o�[�ϐ���ύX���Ă��玩�����g���Q�ƂŕԂ�
    ++value;
    return *this;
}

Integer& Integer::operator--()
{
    --value; // �f�N�������g�͑�������Ɉ���
    return *this;
}

Integer Integer::operator++(int)
{
    // ��u�͕ύX�O�̒l��Ԃ��Ȃ��Ƃ����Ȃ��̂ŁA
    // ��Ɏ������g�̃R�s�[������Ă���
    auto tmp = *this;
    ++* this; // ����Ɉ�ѐ����������邽�ߑO�u���Ăяo��
    return tmp; // �R�s�[���Ă������ύX�O�̒l��Ԃ�
}

Integer Integer::operator--(int)
{
    auto tmp = *this;
    --* this;
    return tmp;
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    
    ++x;
    x.show();
    
    x++;
    x.show();
    
    --x;
    x.show();
    
    x--;
    x.show();
}
