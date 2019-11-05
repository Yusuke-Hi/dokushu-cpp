#include <iostream>
#include <string>

class person
{
    std::string m_name;
    int m_age;

    person(int age);

public:
    person();
    person(std::string name, int age);

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

// ���ʂȏ����������������ꂽ�R���X�g���N�^�[
person::person(int age) : m_age(age)
{
    // �����̃R���X�g���N�^�[�ŋ��ʂȑ�{�̏�����private�ȃR���X�g���N�^�[�ɗp�ӂ��A
    // �Ϗ��R���X�g���N�^�[���g�����ƂŁA��т����i�R��̂Ȃ��j�������菇��񋟂ł���
    std::cout << "���ʃR���X�g���N�^�[�Ăяo��" << std::endl;
}

// �Ϗ����R���X�g���N�^�[�i�����Ȃ��j
person::person()
    : person(-1) // �Ϗ���R���X�g���N�^�[
{
    std::cout << "�����Ȃ��R���X�g���N�^�[�Ăяo��" << std::endl;
}

// �Ϗ����R���X�g���N�^�[�i���O�ƔN���^���ď���������j
person::person(std::string name, int age)
    : person(age) // �Ϗ���R���X�g���N�^�[
{
    std::cout << "�����t���R���X�g���N�^�[�Ăяo��" << std::endl;

    // ���������Ƀ����o�[�֐����Ăяo�����Ƃ��ł���
    set_name(name);
}

void person::set_name(std::string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

std::string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main()
{
    // ������n���ď�����
    person alice("alice", 15);

    std::cout << alice.name() << std::endl; // alice�ƕ\�������
}
