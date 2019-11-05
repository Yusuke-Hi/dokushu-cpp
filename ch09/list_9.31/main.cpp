#include <iostream>

template <typename T>
class A
{
public:
    A() {}

    template <typename U>
    A(A<U>) {}

    template <typename U>
    using rebind = A<U>;

    template <typename U>
    void foo()
    {
        std::cout << "A<T>::foo<U>()" << std::endl;
    }

    template <typename U>
    void bar(U u)
    {
        std::cout << "A<T>::bar<U>(" << u << ")" << std::endl;
    }
};

template <typename U, typename T>
void call_foo(A<T>& a)
{
    // template����q���g���Ă��Ă��A�ˑ������^���̏ꍇ�ɂ�typename�L�[���[�h���K�v
    typename A<T>::template rebind<U> b = a;
    
    b.template foo<int>(); // �ˑ����̃����o�[�֐��Ăяo��
    
                           // �ˑ������e���v���[�g�ł����Ă��^���_���g����Ƃ��ɂ�template����q�͕s�v
    b.bar(42);
}

int main()
{
    A<int> a;

    call_foo<void>(a);
}
