#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

// �����Ƃ��č\���̕ϐ����󂯎��֐�
void show_product(product product)
{
    std::cout << "���iID�F" << product.id << std::endl;
    std::cout << "�P���F" << product.price << std::endl;
    std::cout << "�݌ɐ��F" << product.stock << std::endl;
}

int main()
{
    product pen =
    {
        0, // ���iID
        100, // �P��
        200, // �݌ɐ�
    };

    show_product(pen); // �ʏ�̕ϐ��Ɠ����悤�Ɋ֐��ɓn��
}
