#include <iostream>

class heavy_class
{
    int m_value;

    mutable int m_cache; // �L���b�V���f�[�^
    mutable bool m_cache_valid; // �L���b�V�����L�����ǂ����̃t���O

public:
    int generate() const;

    void set(int value);
    int get() const;
};

// �ݒ肳�ꂽ�l����f�[�^�𐶐����郁���o�[�֐�
int heavy_class::generate() const
{
    std::cout << "�ƂĂ��d���f�[�^�����֐�" << std::endl;
    return m_value;
}

void heavy_class::set(int value)
{
    // �{���̓Z�b�g���ꂽ�^�C�~���O�ōŏI�I�Ɏg���f�[�^�𐶐��ł���Ƃ悢���A
    // �������d���ꍇ�ɂ͕K�v�ɂȂ�܂Ő������Ȃ��Ƃ������Ƃ�����

    m_cache_valid = false; // �L���b�V���𖳌���
    m_value = value;
}

// getter�Ȃ̂�const�����o�[�֐��Ƃ�����
int heavy_class::get() const
{
    // �L���b�V�����L���Ȃ炻���Ԃ�
    if (m_cache_valid) { return m_cache; }

    // �{����const�����o�[�֐��̓����o�[�ϐ���ύX�ł��Ȃ����A
    // mutable�ȃ����o�[�ϐ��͕ύX�ł���
    m_cache = generate(); // �f�[�^�𐶐����ăL���b�V���ɕۑ�
    m_cache_valid = true; // �L���b�V����L����

    return m_cache;
}

int main()
{
    heavy_class heavy_object;

    heavy_object.set(100);

    std::cout << heavy_object.get() << std::endl;

    // �f�[�^�����֐��͌Ă΂ꂸ�A�L���b�V�����Ԃ����
    std::cout << heavy_object.get() << std::endl;

    heavy_object.set(200);

    std::cout << heavy_object.get() << std::endl;

    // �f�[�^�����֐��͌Ă΂ꂸ�A�L���b�V�����Ԃ����
    std::cout << heavy_object.get() << std::endl;
}
