#include <new> // std::bad_alloc��O�ɕK�v
#include <iostream>

int main()
{
    try
    {
        int* ptr = new int;
        
        // �c�c // �����̏���;

        delete ptr;
    }
    // ���������蓖�Ă����s�����ꍇ�̗�O�n���h���[
    catch (std::bad_alloc & e)
    {
        std::cout << "���������蓖�ĂɎ��s���܂���" << std::endl;
    }
}
