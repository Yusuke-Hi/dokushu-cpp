#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 10, 20, 30 };

    // �l�X�g�����^�͂ƂĂ��������炵���āA�������~�X���Ă��܂���������Ȃ�
    // std::vector<T>::reference��T&��\���l�X�g�����^���ł���
    // �G���[�B�^���ԈႦ�Ă��܂����i�̂�v��std::vector<float>�������̂�������Ȃ�
    std::vector<float>::reference r = v[0];

    // �Y�������g���ăA�N�Z�X���Ă��邽��
    // �^�������Ȃ��Ă��v�f�ւ̎Q�Ƃ��擾���Ă��邾�낤�ƍl������
    // �Y�����Z�q���g���Ă��邩��v�f�ւ̎Q�Ƃ��擾���Ă���͂����A�Ƃ킩��̂�
    // auto���g���Ă��^�̗\�z�����ēǂނƂ����ꗂ����܂萶�܂�Ȃ�
    const auto& cr = v[0];
}
