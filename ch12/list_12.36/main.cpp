#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector v = { 10, -3, 0, 4, 2 };

    auto c = v; // sort()�͕ύX����̂ł�������R�s�[
    
    std::sort(c.begin(), c.end()); // �����Ń\�[�g
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
    c = v;
    // �~���Ń\�[�g
    std::sort(c.begin(), c.end(), [](int l, int r) { return l > r; });
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
