#include <iostream>

template <typename Type>
Type lea(Type ptr, Type stride, Type count, Type offset)
{
    return ptr + stride * count + offset;
}

int main()
{
    int i = 0;
    // �����̌^��1�����Ⴄ�i�擪��int*�Ŏc���int�j�̂ŁA
    // �R���p�C���[���ǂ���̌^��Type�ɂ�����悢�����f�ł����G���[
    std::cout << lea(&i, 16, 4, 2) << std::endl;
}
