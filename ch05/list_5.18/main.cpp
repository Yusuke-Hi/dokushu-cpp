#include <iostream>
#include <string>

class Object
{
    std::string name;

public:
    Object(std::string name);

    const std::string& get_name() const;
};

Object::Object(std::string name) : name{ name }
{
    // ������������o�[�ϐ���name�ɃR�s�[
}

const std::string& Object::get_name() const
{
    return name; // name���Q�ƂŕԂ�
}

int main()
{
    Object obj{ "�ƂĂ��傫�ȃI�u�W�F�N�g" };
    // �����o�[�ϐ��ւ̎Q�Ƃ��擾�B�R�s�[���N���Ȃ��̂ō���
    const std::string& name = obj.get_name();
    std::cout << name << std::endl;
}
