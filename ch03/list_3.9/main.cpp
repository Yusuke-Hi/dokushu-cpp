class A
{
    int m_v;

public:
    explicit A(int); // explicit�L�[���[�h��ǉ����邱�Ƃ�
                     // �Öق̃R���X�g���N�^�[�Ăяo�����֎~�ł���

    int v() const;
};

A::A(int v) : m_v(v) // ��`�ɂ�explicit�������Ȃ�
{
}

int A::v() const
{
    return m_v;
}

int main()
{
    A x = 0; // �G���[�B�Öق̃R���X�g���N�^�[�Ăяo���͋֎~����Ă���

    A y(42); // OK�B�����I�ȃR���X�g���N�^�[�Ăяo��

    y.v() == 42; // true
}
