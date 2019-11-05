#include <iostream>
#include <list>

int main()
{
    std::list il = { 0, 1, 2, 3, 4 };
    auto top = il.begin(); // top��0���w��

    auto next = il.begin();
    ++next; // next��1���w��

    auto bottom = il.end();
    --bottom; // bottom��4���w��

    il.erase(top); // �폜���ꂽ�v�f���w��top�͖����ɂȂ邪
    il.push_back(5); // ����ȊO�inext�Abottom�j�͖����ƂȂ�Ȃ�

    for (auto iter = next; iter != bottom; ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}
