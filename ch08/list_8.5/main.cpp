#include <iostream>
#include <iomanip> // ���o�̓}�j�s�����[�^�[���g�p���邽�߂ɕK�v

int main()
{
    // std::hex�}�j�s�����[�^�[�ɂ����16�i���ł̕\���ɐ؂�ւ��
    std::cout << std::hex << 1234 << std::endl;

    // �}�j�s�����[�^�[�ŕ��������_���̐��x��ύX����
    std::cout << std::setprecision(6) << 1234.5678f << std::endl;

    // �t���O���Z�b�g���Ă��A�}�j�s�����[�^�[�ŃN���A�ł���
    std::cout.setf(std::ios::boolalpha);
    std::cout << std::noboolalpha << true << std::endl;
}
