#include <cstdint> // std::intptr_t�̂���
#include <iostream>

// ���܂��܂ȗ��R��const�C������ĂȂ����S�ł͂Ȃ��֐�
// ����C����Ƃ̌��ˍ����ł��̂悤�ɂȂ��Ă��邱�Ƃ�����
extern "C" void unsafe_c_function(char* str)
{
    std::cout << "unsafe_c_function: " << str << std::endl;
}

// ���܂��܂ȗ��R�Ő������^�Ŏ󂯎��Ȃ��֐�
// �R�[���o�b�NAPI�Ȃǂɂ悭������
void unsafe_interface_function(void* data)
{
    auto value = reinterpret_cast<std::intptr_t>(data);
    std::cout << "unsafe_interface_function: " << value << std::endl;
}

int main()
{
    const int value = 72;
    const char message[] = "constant string";

    // �֐��ɓn����悤��const���O��
    unsafe_c_function(const_cast<char*>(message));

    // ���l���|�C���^�[�^�ɕϊ����ēn��
    unsafe_interface_function(reinterpret_cast<void*>(
        static_cast<std::intptr_t>(value)));
}
