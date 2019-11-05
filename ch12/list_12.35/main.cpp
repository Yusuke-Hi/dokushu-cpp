#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 1, 2, 3, 2, 1 };

    auto c = std::count(v.begin(), v.end(), 2);
    std::cout << "v��2��" << c << "����܂�" << std::endl;

    c = std::count_if(v.begin(), v.end(), [](int v) { return v < 2; });
    std::cout << "v�ɂ�2��菬�����v�f��" << c << "����܂�" << std::endl;
}
