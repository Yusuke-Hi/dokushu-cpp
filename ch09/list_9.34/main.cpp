#include <type_traits>

template <typename T>
class vector2d
{
    static_assert(std::is_signed<T>::value,
        "T�͕����������鐔�l�^�ł���K�v������܂�");
    T x;
    T y;

public:
    // �c�c
};

vector2d<float> vf; // OK
vector2d<int> vi; // OK
vector2d<unsigned int> vu; // �G���[