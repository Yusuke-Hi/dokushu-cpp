#include <vector>

template <typename T>
typename std::vector<T>::reference // T���g���Ă���̂�typename���K�v
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

template <typename T>
typename std::size_t // T�Ɉˑ����ĂȂ��̂Ŗ{����typename�͕s�v�����A�G���[�ł͂Ȃ�
size(const std::vector<T>& v)
{
    return v.size();
}

int main()
{
    std::vector<int> v = { 0, 1, 2, 3 };

    // std::vector���̂̓e���v���[�g�����Amain()�֐��͊֐��e���v���[�g�ł͂Ȃ��A
    // �e���v���[�g�p�����[�^�[���g���Ă���킯�ł͂Ȃ��̂ŁA����͈ˑ����ł͂Ȃ�
    std::vector<int>::reference r = at(v, 0);
}
