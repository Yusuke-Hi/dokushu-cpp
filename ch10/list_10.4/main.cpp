#include <iostream>

void throw_zero()
{
    throw 0; // int�^�̗�O�I�u�W�F�N�g�𓊂���
}

int main()
{
    try
    {
        throw_zero();
    }
    catch (float f)
    {
        std::cout << "float�^�̗�O�I�u�W�F�N�g��߂܂��܂��� �l = "
            << f << std::endl;
    }
    catch (...) // �ǂ�catch�߂ɂ���v���Ȃ������ꍇ�A
    // ���ׂĂ̗�O��߂܂��邱�Ƃ��ł���
    {
        // �������A��O�I�u�W�F�N�g�̒l���擾���邱�Ƃ͂ł��Ȃ�
        std::cout << "���Ή��̗�O�I�u�W�F�N�g��߂܂��܂���" << std::endl;
    }
    // catch(...)�̌��ɂ͑���catch�߂�u�����Ƃ͂ł��Ȃ�

    std::cout << "catch��" << std::endl;
}
