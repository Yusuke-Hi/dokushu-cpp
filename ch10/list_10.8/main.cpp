#include <new> // std::bad_array_new_length��O�ɕK�v
#include <iostream>

int main()
{
    try
    {
        int len = 5;
        int* array = new int[len] {0, 1, 2, 3, 4, 5}; // 6�v�f�ŏ��������悤�Ƃ���

        // �c�c // �����̏���
        
        delete[] array;
    }
    // ���ۂɊm�ۂ��铮�I�z��̒�����菉�������X�g�̂ق������������ꍇ�̗�O�n���h���[
    catch (std::bad_array_new_length & e)
    {
        std::cout << "���I�z��̒���������܂���" << std::endl;
    }
    // ���������蓖�Ă����s�����ꍇ�̗�O�n���h���[
    catch (std::bad_alloc & e)
    {
        std::cout << "���������蓖�ĂɎ��s���܂���" << std::endl;
    }
}
