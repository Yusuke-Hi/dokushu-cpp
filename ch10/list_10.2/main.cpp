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
    catch (float f) // int�^�̃I�u�W�F�N�g�͕߂܂����Ȃ�
    {
        std::cout << "float�^�̗�O�I�u�W�F�N�g��߂܂��܂��� �l = "
            << f << std::endl;
    }
    catch (int i)
    {
        std::cout << "int�^�̗�O�I�u�W�F�N�g��߂܂��܂��� �l = " << i << std::endl;
    }
    catch (char c)
    {
        std::cout << "char�^�̗�O�I�u�W�F�N�g��߂܂��܂��� �l = "
            << static_cast<int>(c) << std::endl;
    }
    catch (int i) // int�^��catch��2��
    {
        std::cout << "2�Ԗڂ�int�^��catch�ŗ�O�I�u�W�F�N�g��߂܂��܂��� �l = "
            << i << std::endl;
    }
}
