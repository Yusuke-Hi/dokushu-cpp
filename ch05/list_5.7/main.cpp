#include <vector>
#include <iostream>

int main()
{
    std::vector<int> empty; // ��̓��I�z��
    std::cout << "empty.size(): " << empty.size() << std::endl;

    std::vector<int> array = { 10, 20, 30, 40, 50 }; // {}���g���ď�����
    std::cout << "array.size(): " << array.size() << std::endl;

    // �͈�for���ő������ł���
    for (int e : array)
    {
        std::cout << e << std::endl;
    }
}
