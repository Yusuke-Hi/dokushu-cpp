#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() { } // ���z�f�X�g���N�^�[���`���ă|�����[�t�B�b�N�ɂ���
};

class DerivedA : public Base
{
};

class DerivedB : public Base
{
};

// �n���ꂽ�I�u�W�F�N�g�̎��ۂ̌^�ɂ���ă��b�Z�[�W��ς���
void determine_class(const Base& obj)
{
    const std::type_info& obj_type = typeid(obj);

    if (obj_type == typeid(DerivedA))
    {
        // �n���ꂽobj�����ۂɂ�DerivedA�^�������ꍇ
        std::cout << "obj �� DerivedA�^�̃C���X�^���X�ł�" << std::endl;
    }
    else if (obj_type == typeid(DerivedB))
    {
        // �n���ꂽobj�����ۂɂ�DerivedB�^�������ꍇ
        std::cout << "obj �� DerivedB�^�̃C���X�^���X�ł�" << std::endl;
    }
    else
    {
        std::cout << "obj �� DerivedA�ł�DerivedB�ł��Ȃ��C���X�^���X�ł�"
            << std::endl;
    }
}

// determine_class���m��Ȃ��h���N���X
class DerivedC : public Base
{
};

int main()
{
    DerivedA a;

    determine_class(a); // DerivedA�^�̃I�u�W�F�N�g��n��

    DerivedB b;

    determine_class(b); // DerivedB�^�̃I�u�W�F�N�g��n��

    DerivedC c;

    determine_class(c); // DerivedC�^�̃I�u�W�F�N�g��n��
}
