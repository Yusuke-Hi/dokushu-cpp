#include <tuple>
#include <iostream>

int main()
{
    // �N���X�e���v���[�g�̌^���_��������
    // std::tuple<std::string, int, const char*>
    std::tuple t{ std::string{"structured"}, 42, "binding" };

    auto [a, b, c] = t; // �\���������B�e�v�f���R�s�[����
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    
    std::cout << std::endl;
    
    auto& [x, y, z] = t; // �\���������B�������e�v�f�ւ̎Q�Ƃ�����
    
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
    std::cout << std::endl;
    
    x = "update"; // �Q�Ƃ��g���ă^�v���̗v�f��ύX����
    std::cout << std::get<0>(t) << std::endl;
}
