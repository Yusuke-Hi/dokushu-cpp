template <typename... T>
void function(T&&... args);

// �����̐����ςȃe���v���[�g�֐�
template <typename... T>
void foo(T... args)
{
    function<T...>(args...); // ������...�͂ǂ�����W�J�\��
    // �Ⴆ��foo<int, float, char>(1, 2.f, 3)�ƌĂяo���ꂽ�ꍇ�A���̉��̂Ƃ���
    // void foo(int args_1, float args_2, char args_3)�̂悤�ɂȂ�̂�
    // �p�����[�^�[�p�b�N���W�J������
    // function<int, float, char>(args_1, args_2, args_3)
    // �ɒu�������
}
