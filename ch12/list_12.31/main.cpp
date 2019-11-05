#include <set>
#include <iostream>
int main()
{
    std::multiset ims = { 1, 1, 2, 2 };

    ims.insert(5); // {1, 1, 2, 2, 5}
    ims.insert(2); // {1, 1, 2, 2, 2, 5}
    
    auto range = ims.equal_range(2);
    // equal_range(v)��v�Ɠ������v�f�͈̔͂�std::pair�ŕԂ�
    for (auto iter = range.first; iter != range.second; ++iter)
    {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
    
    // 2���i���ׂāj�폜���A�폜���ꂽ�v�f����Ԃ�
    std::size_t erased = ims.erase(2);
    std::cout << "elements num:" << erased << std::endl;

    for (auto iter = ims.begin(); iter != ims.end(); ++iter)
    {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
}
