#include <iostream>

class data
{
public:
    using integer = int; // �N���X�̒��Ŏg�������ɕʖ���^����

                         // �N���X�̒��ł͕ʖ��𒼐ڎg����
    integer get_value();
    void set_value(integer mew_value);
private:
    integer value;
};

// �N���X�̊O�ł̓X�R�[�v�������Z�q���g��
data::integer data::get_value()
{
    return value;
}

// �����o�[�֐��̒��̓N���X�̓����Ƃ��������Ȃ̂ŁA
// �X�R�[�v�������Z�q���g��Ȃ��Ă��l�X�g�����^�����g����
void data::set_value(integer new_value)
{
    integer tmp = new_value;
    value = tmp;
}

int main()
{
    data d;

    // �l�X�g�����^���͒����Ȃ肪���Ȃ̂ŁA�K�v�ɉ����Ă���ɕʖ���^����Ƃ悢
    using integer = data::integer;

    integer value = 42; // integer��data::integer�̕ʖ�

    d.set_value(value);

    std::cout << d.get_value() << std::endl;
}
