#include <iostream>

template <typename T>
class vector2d
{
public:
    // �e���v���[�g�p�����[�^�[�œn���ꂽ�^�Ń����o�[�ϐ���錾
    T x;
    T y;
};

void show(int v)
{
    std::cout << "int: " << v << std::endl;
}

void show(float v)
{
    std::cout << "float: " << v << std::endl;
}

int main()
{
    // float�^��2�����x�N�g�����`
    vector2d<float> f2d{ 10.0f, 20.0f };
    
    // int�^��2�����x�N�g�����`
    vector2d<int> i2d{ 10, 20 };
    
    // �G���[�B�����N���X�e���v���[�g���g���Ă��邪�A�e���v���[�g�������قȂ�̂ŕʂ̌^
    // i2d = f2d;
    
    f2d.x = -10.0f; // �����o�[�ւ̃A�N�Z�X���@�͒ʏ�̃N���X�Ɠ���
    
    show(i2d.y); // int�^�̃I�[�o�[���[�h���Ă΂��
    show(f2d.y); // float�^�̃I�[�o�[���[�h���Ă΂��
}
