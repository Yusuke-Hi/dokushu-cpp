class S
{
public:
    // �錾�Ɠ����ɒ�`���^����ꍇ
    template <typename T>
    void foo(T value)
    {
        // �c�c
    }
    // �錾�ƒ�`�𕪂���ꍇ
    template <typename T>
    void bar(T value);
};

// ���ʂ̃����o�[�֐���`��template���t��������
template <typename T>
void S::bar(T value)
{
    // �c�c
}

int main()
{
    S s;
    
    s.foo<int>(0);
    
    s.bar<float>(0.0f);
}
