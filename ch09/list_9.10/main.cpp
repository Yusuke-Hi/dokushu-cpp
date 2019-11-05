#include <iostream>

// �f�[�^�����������Ă���2�����x�N�g���̍\����
struct vector2d
{
    int x;
    int y;
};

// getter / setter���o�R����2�����x�N�g���N���X
class Vec2
{
    int m_x;
    int m_y;

public:
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    
    void setX(int x) { m_x = x; }
    void setY(int y) { m_y = y; }
};

// �e���v���[�g�̑O���錾
template <typename Vector>
void show_vector(Vector v);

// 2�����x�N�g���N���X�Ŗ����I���ꉻ�����e���v���[�g
// �O���錾������΃v���C�}���e���v���[�g���Ȃ��Ă����ꉻ�͂ł���
template <>
void show_vector<Vec2>(Vec2 v)
{
    // Vec2���������o�[�֐����o�R���Ď擾
    std::cout << "Vec2{x: " << v.getX() << ", y: " << v.getY() << "}"
        << std::endl;
}

// �v���C�}���e���v���[�g�͓��ꉻ�̂��Ƃł���`�ł���
template <typename Vector>
void show_vector(Vector v)
{
    // �v���C�}���e���v���[�g��x��y�̃����o�[�ϐ��ɒ��ڃA�N�Z�X����O��
    std::cout << "{x: " << v.x << ", y: " << v.y << "}" << std::endl;
}

int main()
{
    vector2d st{ 10, 20 };

    show_vector<vector2d>(st); // �v���C�}���e���v���[�g���I�������

    Vec2 cl;
    cl.setX(-20);
    cl.setY(-10);

    show_vector<Vec2>(cl); // �����I���ꉻ�����e���v���[�g���I�������
}
