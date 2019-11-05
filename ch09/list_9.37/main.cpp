#include <iostream>
#include <initializer_list>

// T�^�̗v�f�����R���e�i
template <typename T>
class Container
{
    T* ptr = nullptr;
    std::size_t count = 0;

public:
    // count�Ŏw�肳�ꂽ���Ainit���g���ď���������
    explicit Container(const T& init, std::size_t count);

    // {}���g����������
    Container(std::initializer_list<T> init);
    
    ~Container() { delete[] ptr; }
    
    void show() const;
};

template <typename T>
Container<T>::Container(const T& init, std::size_t count)
    : ptr{ new T[count] }, count{ count }
{
    for (std::size_t i = 0; i < count; ++i)
    {
        ptr[i] = init;
    }
}

template <typename T>
Container<T>::Container(std::initializer_list<T> init)
    : ptr{ new T[init.size()] }, count{ init.size() }
{
    std::size_t i = 0;
    for (auto& e : init)
    {
        ptr[i++] = e;
    }
}

template <typename T>
void Container<T>::show() const
{
    for (std::size_t i = 0; i < count; ++i)
    {
        std::cout << ptr[i] << std::endl;
    }
}

int main()
{
    // �{���� Container<std::string> �Ə������A�R���X�g���N�^�[�̎���������^���_����
    // ��1�������e���v���[�g�p�����[�^�[T���g���Ă��āAstd::string���n���ꂢ��̂�
    // T��std::string�ɐ��_�����
    Container s{ std::string{"Hello"}, 3 };
    s.show();
    std::cout << std::endl;
    Container i = { 0, 1, 2, 3 }; // ��������l�ɏ��������X�g����^���_����
    i.show();
}