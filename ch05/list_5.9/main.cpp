#include <vector>
#include <iostream>

int main()
{
    std::vector<int> list;

    list.push_back(42); // ������42��ǉ�
    list.push_back(0); // ������0��ǉ�

    for (int e : list)
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    list.pop_back(); // �Ō�̗v�f���폜
    list.push_back(-10); // ������-10��ǉ�

    for (int e : list)
    {
        std::cout << e << std::endl;
    }
}
