#include <iostream>

int main()
{
    // ���̃\�[�X�t�@�C�������o��
    std::cout << "__FILE__�F" << __FILE__ << std::endl;

    // ���̍s�̍s�ԍ����o��
    std::cout << "__LINE__�F" << __LINE__ << std::endl;

    // ���̊֐��̊֐������o��
    std::cout << "__func__�F" << __func__ << std::endl;

    // �Q�Ƃ��Ă���C++�̃o�[�W�������o��
    std::cout << "__cplusplus�F" << __cplusplus << std::endl;

    int line = __LINE__; // �ϐ��Ɍ��݂̍s�ԍ����i�[

    // line�͌��݂̍s�ԍ��ł͂Ȃ��A�ϐ��Ɋi�[���ꂽ�Ƃ��̍s�ԍ����\������邱�Ƃɒ���
    std::cout << "line�F" << line << ", __LINE__�F" << __LINE__
        << std::endl;
}
