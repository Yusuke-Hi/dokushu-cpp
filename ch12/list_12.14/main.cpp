#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };

    auto it = v.begin() + 1; // �擪����2�Ԗڂ��w��
    v.erase(it);

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}
