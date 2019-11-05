#include <iostream>
#include <exception> // std::exception�ɕK�v

class my_exception : public std::exception
{
    const char* message;

public:
    explicit my_exception(const char* message);
    const char* what() const noexcept override; // ��O�Ɋւ��郁�b�Z�[�W��Ԃ�
};

// �󂯎�������b�Z�[�W�������Ă���
my_exception::my_exception(const char* message)
    : message{ message }
{
}

const char* my_exception::what() const noexcept
{
    // �����Ă������b�Z�[�W��Ԃ�
    return message;
}

int main()
{
    try
    {
        // �����ŗp�ӂ����Ǝ��̗�O�����b�Z�[�W�ƂƂ��ɓ�����
        throw my_exception{ "My Exception" };
    }
    catch (my_exception & e)
    {
        std::cout << "what: " << e.what() << std::endl;
    }
}
