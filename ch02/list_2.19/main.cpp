#include <iostream>

// 2�����x�N�g����\���\����
struct vector2d
{
    int x;
    int y;
};

// �����p�̃I�[�o�[���[�h
int add(int left, int right)
{
    return left + right;
}

// ���������_���p�̃I�[�o�[���[�h
double add(double left, double right)
{
    return left + right;
}

// 2�����x�N�g���p�̃I�[�o�[���[�h
vector2d add(vector2d left, vector2d right)
{
    vector2d v;
    v.x = left.x + right.x;
    v.y = left.y + right.y;
    return v;
}

int main()
{
    int integer = add(1, 2); // �����p�̃I�[�o�[���[�h���Ă΂��
    std::cout << integer << std::endl;

    // ���������_���p�̃I�[�o�[���[�h���Ă΂��
    double floating = add(3.14, 42.195);
    std::cout << floating << std::endl;

    vector2d v = { 1, 2 };
    vector2d u = { -3, 4 };

    vector2d w = add(v, u); // 2�����x�N�g���p�̃I�[�o�[���[�h���Ă΂��
    std::cout << w.x << ", " << w.y << std::endl;
}
