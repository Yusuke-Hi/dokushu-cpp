#include <iostream>

class Marker
{
public:
    Marker();
    ~Marker();
};

Marker::Marker()
{
    std::cout << "�R���X�g���N�^�[: " << this << std::endl;
}

Marker::~Marker()
{
    std::cout << "�f�X�g���N�^�[: " << this << std::endl;
}

void copy(Marker m)
{
    std::cout << "copy: " << &m << std::endl;
}

void reference(const Marker& m)
{
    std::cout << "reference: " << &m << std::endl;
}

int main()
{
    Marker m;

    std::cout << "�l�n���O" << std::endl;
    copy(m);
    std::cout << "�l�n����" << std::endl;

    std::cout << "�Q�Ɠn���O" << std::endl;
    reference(m);
    std::cout << "�Q�Ɠn����" << std::endl;
}
