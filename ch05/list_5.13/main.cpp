#include <iostream>
#include <string>

class Object
{
    std::string name;

public:
    Object() : Object("NO NAME") { }
    explicit Object(std::string name) : name(name) { }
    ~Object();

    void show_name() const;
};

Object::~Object()
{
    std::cout << "Object�̃f�X�g���N�^�[" << std::endl;
}

void Object::show_name() const
{
    std::cout << "object name: " << name << std::endl;
}

int main()
{
    // �z���new���Z�q�B�߂�l�̌^���|�C���^�[�ł��邱�Ƃɒ���
    Object* obj = new Object[10]
    {
        Object{"first"},
        Object{"second"},
        // ����ȍ~�̗v�f�̓f�t�H���g�R���X�g���N�^�[�ŏ����������
    };

    obj[0].show_name();
    obj[1].show_name();
    obj[2].show_name();
    
    // �z���delete���Z�q�B�e�v�f�́i�����ł�10�́j�f�X�g���N�^�[�����ׂČĂ΂��
    delete[] obj;
}
