#include <iostream>

extern "C" void call_c(); // C�����P�[�W���w�肵��C����̊֐����Ăׂ�悤��

extern "C" void call_cpp() // C�����P�[�W���w�肵��C���ꂩ��Ăׂ�悤��
{
    std::cout << "call_cpp" << std::endl;

    call_c();
}
