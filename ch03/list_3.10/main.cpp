#include <iostream>

class S
{
public:
    int answer = 42; // NSDMI
    float pi{ 3.14159265f }; // �����NSDMI
};

int main()
{
    S s; // NSDMI�ɂ���ăf�t�H���g�l�ŏ����������

    std::cout << "s.answer: " << s.answer << std::endl;

    std::cout << "s.pi: " << s.pi << std::endl;
}
