#include <iostream>
#include <typeinfo> // typeid���Z�q�Astd::type_info�ɕK�v

int main()
{
    // typeid���Z�q���Ԃ��^�͏��std::type_info�ւ�const�Q��

    const std::type_info& int_type = typeid(int); // int�^�Ɋւ�������擾
    const std::type_info& one_type = typeid(1); // 1�Ɋւ���^�����擾

    if (int_type == one_type) // ���̌^���Ɣ�r
    {
        std::cout << "1��int�^�ł�" << std::endl;
    }
    else
    {
        std::cout << "1��int�^�ł͂���܂���" << std::endl;
    }

    const std::type_info& str_type = typeid("hoge"); // ������"hoge"�̌^�����擾
    if (int_type != str_type)
    {
        std::cout << "\"hoge\"��int�^�ł͂���܂���" << std::endl;
    }
    else
    {
        std::cout << "\"hoge\"��int�^�ł�" << std::endl;
    }
}
