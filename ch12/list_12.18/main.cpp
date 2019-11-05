#include <iostream>
#include <list>
#include <iterator>

int main()
{
    std::list l = { 1, 5, 9, 13 };

    auto iter = l.begin();

    std::advance(iter, 1); // iter��1�i�ށi5���w���j

    auto iter2 = std::prev(iter); // iter2��1���w���iiter�͂��̂܂܁j
    std::cout << "*iter2: " << *iter2 << std::endl;

    auto iter3 = std::next(iter, 2); // iter3��13���w���iiter�͂��̂܂܁j
    std::cout << "*iter3: " << *iter3 << std::endl;

    std::cout << "*iter: " << *iter << std::endl;
}
