#include <iostream>
#include <string>

template <typename T>
class A
{
public:
    std::string name() const
    {
        return "A�̃v���C�}���e���v���[�g";
    }

    void common_method()
    {
        std::cout << "���ʓ���" << std::endl;
    }
};

template <>
class A<int>
{
public:
    std::string name() const
    {
        return "A��int�Ŗ����I���ꉻ�����e���v���[�g";
    }
    
    // �v���C�}���e���v���[�g�Ƃ܂������������������ꍇ�ł��A
    // �����I���ꉻ�����e���v���[�g�ł���`����K�v������
    void common_method()
    {
        std::cout << "���ʓ���" << std::endl;
    }
};

int main()
{
    A<float> f; // �v���C�}���e���v���[�g���g����
    
    std::cout << f.name() << std::endl;
    
    A<int> i; // �����I���ꉻ�����e���v���[�g���g����
    
    std::cout << i.name() << std::endl;
}
