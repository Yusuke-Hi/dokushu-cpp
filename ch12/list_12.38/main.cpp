#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

int main()
{
    std::vector v = { 10, -3, 2, -1, -5, 4, 2 };
    std::vector<int> c; // �R�s�[��͋�̂܂܂ł悢

    // push_back()���g���ď��ԂɃR�s�[���Ă���
    std::copy(v.begin(), v.end(), std::back_inserter(c));

    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
 
    // std::vector��push_front()�������Ȃ��̂�list���g��
    std::list<int> l;
    
    // push_front()���g���ď��ԂɃR�s�[���Ă���
    // �R�s�[�̓x�ɐ擪�ɑ}������̂ŋt���ɂȂ�
    std::copy(v.begin(), v.end(), std::front_inserter(l));
    
    for (auto e : l)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
    c = { 0, 0 };
    
    // insert()���g���Đ^�񒆂ɏ��Ԃɑ}�����Ă���
    std::copy(v.begin(), v.end(), std::inserter(c, c.begin() + 1));
    
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
