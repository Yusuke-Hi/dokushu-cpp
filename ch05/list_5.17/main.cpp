#include <iostream>

int x;

int& get_x() // �Q�Ƃ�Ԃ��֐�
{
    return x; // �Q�Ƃ�Ԃ��Ƃ��ł����Ă����ʂȂ��Ƃ͂��Ȃ��Ă悢
}

int main()
{
    x = 10;
    int& y = get_x(); // �Ԃ��ꂽ�Q�Ƃ����̂܂܎Q�ƂƂ��Ď󂯎��
    y = 100;
    std::cout << x << std::endl;
}
