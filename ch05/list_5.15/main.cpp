#include <iostream>
#include <initializer_list> // std::initializer_list���g���̂ɕK�v

class int_vector
{
    std::size_t m_size;
    int* m_array;

public:
    int_vector(std::initializer_list<int> init);
    ~int_vector();

    std::size_t size() const
    {
        return m_size;
    }

    int at(int n) const
    {
        return m_array[n];
    }
};

// std::initializer_list���󂯎��R���X�g���N�^�[
int_vector::int_vector(std::initializer_list<int> init)
    : m_size{ init.size() }, m_array{ new int[init.size()] }
{
    // std::initializer_list�̒��g���g���ē��I�z�������������
    for (std::size_t i = 0; i < init.size(); ++i)
    {
        m_array[i] = init[i];
    }
}

int_vector::~int_vector()
{
    delete[] m_array;
}

int main()
{
    // �z��̂悤��std::initializer_list���g���ď�����
    int_vector iv = { 0, 1, 2, 3, 4, 5 };
    std::cout << "iv.size() = " << iv.size() << std::endl;
    std::cout << "iv.at(3) = " << iv.at(3) << std::endl;
}