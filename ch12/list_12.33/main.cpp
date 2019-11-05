#include <iostream>

// predicate��true��Ԃ����v�f�݂̂��R���\�[���ɏo�͂���֐�
template <typename P>
void filtered_show(int(&array)[5], P predicate)
{
    for (int e : array)
    {
        if (predicate(e))
        {
            std::cout << e << std::endl;
        }
    }
}

// 5��菬�����Ȃ�true��Ԃ��֐��I�u�W�F�N�g
class is_less_than_5
{
public:
    bool operator()(int v) const
    {
        return v < 5;
    }
};

int main()
{
    int array[] = { 5, 10, 3, 0, 1 };

    // �����_����n��
    filtered_show(array, [](int v) { return (v % 2) == 1; });

    std::cout << std::endl;

    // �����Œ�`�����֐��I�u�W�F�N�g���n�����Ƃ��ł���
    filtered_show(array, is_less_than_5{});
}
