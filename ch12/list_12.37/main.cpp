#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector v = { 10, -3, 2, 0, -1, -5, 4, 2 };
    std::vector<int> c(v.size()); // ���炩���ߗ̈���m��

                                  // �������ɐ擪����R�s�[
    std::copy(v.begin(), v.end(), c.begin());
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    // �����̂݌�납�珇�ԂɃR�s�[
    auto last = std::copy_if(v.rbegin(), v.rend(), c.begin(),
        [](int i) { return 0 < i; });
    
    // �Ԃ��ꂽ�C�e���[�^�[�̎�O�܂łɂ����L���ȃf�[�^�͓����Ă��Ȃ��̂ŁA
    // ����Ȍ�͍폜����
    c.erase(last, c.end());
    
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
