class A
{
public:
    operator int() const { return 0; }
};

class B
{
public:
    // explicit�w�肳�ꂽint�ւ̕ϊ��֐�
    explicit operator int() const { return 0; }
};

int main()
{
    A a;
    int ia = a; // OK�B�ϊ��֐���explicit�w�肳��Ă��Ȃ�
    char ca = a; // OK�Bint�ɈÖٕϊ����ꂽ���ƁAchar�ɑ�������

    B b;
    int ib = b; // �G���[�B�ϊ��֐���explicit�w�肳��Ă���̂ŁA
                // B����int�ւ̈Öٕϊ��͍s���Ȃ�

    char cb = b; // �G���[�Bint�ւ̈Öٕϊ����֎~����Ă���̂�char�ւ�����ł��Ȃ�
    
    int j(b); // OK�B�ϐ�j�͕ϊ��֐��̖߂�l�ŏ����������
    int k = static_cast<int>(b); // OK�B�����I�ɃL���X�g�����ꍇ�͕ϊ��֐����Ă΂��
}