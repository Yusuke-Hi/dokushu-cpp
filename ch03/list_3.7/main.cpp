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

    person(const person& other); // �R�s�[�R���X�g���N�^�[

    void set_name(std::string name);
    void set_age(int age);

    std::string name() const;
    int age() const;
};

person::person(int age) : m_age(age)
{
    std::cout << "���ʃR���X�g���N�^�[�Ăяo��" << std::endl;
}

person::person() : person(-1)
{
    std::cout << "�����Ȃ��R���X�g���N�^�[�Ăяo��" << std::endl;
}

person::person(std::string name, int age) : person(age)
{
    std::cout << "�����t���R���X�g���N�^�[�Ăяo��" << std::endl;
    set_name(name);
}

// �R�s�[�R���X�g���N�^�[
person::person(const person& other)
{
    std::cout << "�R�s�[�R���X�g���N�^�[�Ăяo��" << std::endl;
    // ���O���R�s�[����
    set_name(other.name());
    set_age(other.age());
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
    person alice("alice", 15);

    person copy(alice); // �R�s�[�R���X�g���N�^�[�Ăяo��
    std::cout << copy.name() << std::endl;
    std::cout << alice.name() << std::endl;
}
