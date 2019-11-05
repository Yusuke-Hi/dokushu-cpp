#include <iostream>

template <typename T>
class S
{
public:
    static int value;
};

// ���Ƃ�static�����o�[�ϐ��̌^���e���v���[�g�p�����[�^�[�ɂ܂������ˑ����Ă��Ȃ��Ă�
// �e���v���[�g�̋L�q�͕K�{
template <typename T>
int S<T>::value = 0;

int main()
{
    // �����l�͂ǂ����0��^���Ă���
    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;

    // ���ꂼ���static�����o�[�ϐ��̃A�h���X��\��
    std::cout << "&S<int>::value: " << &S<int>::value << std::endl;
    std::cout << "&S<float>::value: " << &S<float>::value << std::endl;
    
    S<int>::value = 42; // int�^�ō����static�����o�[�ϐ���ύX����
    
    // static�����o�[�ϐ����̂����ꂼ��̃N���X�̎��̂��Ƃɍ����̂�
    // S<float>::value�͕ύX����Ȃ�
    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;
}
