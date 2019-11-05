#include <iostream>

class A
{
    int value;

public:
    explicit A(int value) : value{ value } { }
    void show() const;
};

void A::show() const
{
    std::cout << "A.value: " << value << std::endl;
}

class A_observer_ptr
{
    A* pointer;

public:
    explicit A_observer_ptr(A* pointer)
        : pointer{ pointer } { }
    A& operator*() const; // �ԐڎQ�Ɖ��Z�q
    A* operator->() const; // �A���[���Z�q
};

// int�^�̂Ƃ��Ɠ�������const�ȎQ�Ƃ�Ԃ�
A& A_observer_ptr::operator*() const
{
    return *pointer;
}

// �A���[���Z�q�̓|�C���^�[��Ԃ��Ȃ���΂Ȃ�Ȃ����Ƃɒ���
A* A_observer_ptr::operator->() const
{
    return pointer;
}

int main()
{
    A a{ 42 };

    A_observer_ptr pointer{ &a };

    (*pointer).show(); // �ԐڎQ�Ɖ��Z�q���g���ă����o�[�֐��ɃA�N�Z�X

    pointer->show(); // �A���[���Z�q���g���ă����o�[�֐��ɃA�N�Z�X
}
