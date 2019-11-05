#include <iostream>

class product
{
    int id; // ���iID
    int price; // �P��
    int stock; // �݌ɐ�

public:
    int get_id(); // ���iID��getter
    void set_id(int new_id); // ���iID��setter

    int get_price(); // �P����getter
    void set_price(int new_price); // �P����setter

    int get_stock(); // �݌ɐ���getter
    void set_stock(int new_stock); // �݌ɐ���setter
};

int product::get_id()
{
    // �����o�[�֐��̓����ł̓����o�[�ϐ��ɒ��ڃA�N�Z�X�ł���
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int product::get_price()
{
    return price;
}

void product::set_price(int new_price)
{
    // Setter���g���ƐV�����l���s���Ȓl�łȂ����`�F�b�N�ł���
    if (new_price < 0)
    {
        std::cout << "�G���[�F�P����0�ȏ�ɂ��Ă�������" << std::endl;
        return;
    }
    price = new_price;
}

int product::get_stock()
{
    return stock;
}

void product::set_stock(int new_stock)
{
    if (new_stock < 0)
    {
        std::cout << "�G���[�F�݌ɐ���0�ȏ�ɂ��Ă�������" << std::endl;
        return;
    }
    stock = new_stock;
}

int main()
{
    product pen; // �y���Ɋւ���f�[�^�����ϐ�

                 // �����o�[�ϐ��͔���J�Ȃ̂�setter���g���Ēl���i�[���Ă���
    pen.set_id(0);
    pen.set_price(100);
    pen.set_stock(200);

    product* ptr = &pen; // �C���X�^���X�ւ̃|�C���^�[

    // �A���[���Z�q���g����getter����l���擾
    std::cout << "���iID�F" << ptr->get_id() << std::endl;
    std::cout << "�P���F" << ptr->get_price() << std::endl;
    std::cout << "�݌ɐ��F" << ptr->get_stock() << std::endl;
}
