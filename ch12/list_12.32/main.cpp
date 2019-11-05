#include <map>
#include <iostream>

int main()
{
    std::multimap<std::string, float> w; // ���Ό��q����

    w.insert(std::pair{ "U", 235.04f }); // �E����235
    w.insert(std::pair{ "U", 238.05f }); // �E����238

    w.insert(std::pair{ "Pu", 238.05f }); // �v���g�j�E��238
    w.insert(std::pair{ "Pu", 239.05f }); // �v���g�j�E��239
    w.insert(std::pair{ "Pu", 240.05f }); // �v���g�j�E��240

    // �v���g�j�E�����܂܂�Ă���͈͂�std::pair�ŕԂ�
    auto pu = w.equal_range("Pu");

    for (auto iter = pu.first; iter != pu.second; ++iter)
    {
        std::cout << iter->first << ": " << iter->second << std::endl;
    }
    
    // �v���g�j�E�������ׂč폜���폜���ꂽ�v�f����Ԃ�
    std::size_t erased = w.erase("Pu");
    
    std::cout << "elements num:" << erased << std::endl;
    
    for (auto iter = w.begin(); iter != w.end(); ++iter)
    {
        std::cout << iter->first << ": " << iter->second << std::endl;
    }
    std::cout << std::endl;
}
