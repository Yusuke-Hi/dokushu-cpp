#include <vector>

// �G�C���A�X�e���v���[�g
template <typename T>
// ���̌^��T�Ɉˑ�����̂�typename���K�v
using vector_reference = typename std::vector<T>::reference;

template <typename T>
vector_reference<T> // T���g���Ă��邪�A�G�C���A�X�̒��ňˑ������������Ă���̂�
                    // �����ł͕s�v
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}
