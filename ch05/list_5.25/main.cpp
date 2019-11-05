#include <iostream>
#include <utility>

// �Ƃ�\���N���X
class home
{
    int* m_land; // �y�n

public:
    explicit home(std::size_t size)
        : m_land{ new int[size] } {}

    ~home() { delete[] m_land; }
    
    home(home&& other);
    
    int* land() const { return m_land; }
};

home::home(home&& other)
    : m_land{ other.m_land } // �܂����[�u���̃|�C���^�[���R�s�[����
{
    // ���[�u���̃|�C���^�[����ɂ���
    // ����ł��̃|�C���^�[�������Ă���̂͂��̃I�u�W�F�N�g�����ɂȂ�i���L���̈ړ��j
    other.m_land = nullptr;
}

int main()
{
    home A{ 100 };

    std::cout << "A�̓y�n�̃A�h���X: " << A.land() << std::endl;

    // A�͂����g��Ȃ��Ȃ����̂ŁAA����B�ɏ��L�����ړ�
    home B{ std::move(A) };

    std::cout << "B�̓y�n�̃A�h���X: " << B.land() << std::endl;
    std::cout << "�ړ����A�̓y�n�̃A�h���X: " << A.land() << std::endl;
}
