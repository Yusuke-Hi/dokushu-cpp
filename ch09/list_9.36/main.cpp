#include <iostream>
#include <string>

int main()
{
    auto lambda = [](const auto &value) // valueの型は呼び出し時の引数から推論される
    {
        std::cout << type(value) << std::endl;
    };

    lambda(42);

    lambda("type deduction");
}
