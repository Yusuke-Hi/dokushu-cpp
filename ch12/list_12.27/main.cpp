#include <iostream>
#include <set>

int main()
{
    std::set is = { 3, 1, 0, 2, 4 };

    // �v�f�������ɕ���ł��邽�ߑ}���ʒu�̎w��͊�{�I�ɈӖ��������Ȃ�
    is.insert(is.end(), -1);

    // �C�e���[�^�[��^���Ȃ�insert()���p�ӂ���Ă���
    is.insert(-2);

    for (auto iter = is.begin(); iter != is.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}
