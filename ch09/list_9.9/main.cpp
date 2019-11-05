#include <iostream>

struct S_shared
{
    static int value;
};

// �N���X�e���v���[�g�Ԃŋ��L�ł���ϐ�
int S_shared::value = 0;

template <typename T>
class S : public S_shared
{
};

int main()
{
    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;

    // ���ꂼ���static�����o�[�ϐ��̃A�h���X��\��
    std::cout << "&S<int>::value: " << &S<int>::value << std::endl;
    std::cout << "&S<float>::value: " << &S<float>::value << std::endl;
    
    S<int>::value = 42; // int�^�̎��̂�ʂ���static�����o�[�ϐ���ύX����
    
    // �N���X�e���v���[�g�̎��͈̂قȂ邪�A��{�̊��N���X�͂���1�Ȃ̂ŕϐ������L�����
    std::cout << "S<int>::value: " << S<int>::value << std::endl;
    std::cout << "S<float>::value: " << S<float>::value << std::endl;
}
