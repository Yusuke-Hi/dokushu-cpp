#include <iostream>
int main()
{
    int* p = new int(42);

    std::cout <<
        "�����A�F���A�����Ė����ɂ��Ă̋��ɂ̋^��̓���: " <<
        *p << std::endl;
    
    delete p; // delete���Z�q�͒ʏ�̂܂�
}
