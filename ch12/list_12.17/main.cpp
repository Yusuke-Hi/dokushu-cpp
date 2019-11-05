#include <iostream>
#include <list>
#include <iterator> // std::advance()�p

int main()
{
    // �N���X�e���v���[�g�̌^���_���g����<T>���ȗ����邱�Ƃ��ł���
    std::list<int> l = { 1, 5, 9 };

    l.insert(l.begin(), 0);
    l.insert(l.end(), 10);

    auto iter = l.begin();
    std::advance(iter, 2); // iter��2�i�߂�

    l.insert(iter, 2, 3);

    int ia[] = { 6, 7, 8 };
    std::advance(iter, -2); // 2�߂�

    l.insert(iter, ia, ia + 3);

    for (auto it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
