#include <iostream>

int main()
{
    float f = -1234.5678f; // ���l�̕��������_��
    std::cout << f << std::endl;
    
    int i = f; // float����int�ւ̈Öق̌^�ϊ�
               // �����͈����邪�����������ׂĐ؂�̂Ă���
    std::cout << i << std::endl;
    
    unsigned int u = i; // int����unsigned int�ւ̈Öق̌^�ϊ�
                        // �����������Ȃ��̂őΉ����鐳���ɂȂ�
    std::cout << u << std::endl;
    
    unsigned short s = u; // unsigned int����unsigned short�ւ̈Öق̌^�ϊ�
                          // unsigned short�ň����Ȃ�����Ȑ��ɂȂ��Ă���̂�
                          // unsigned short�͈̔͂Ɏ��߂���
    std::cout << s << std::endl;
    
    u = s; // unsigned short����unsigned int�ւ̈Öق̌^�ϊ�
           // unsigned short�ɂ����Ƃ��ɒl���؂�l�߂��Ă���̂ŁA
           // �O��unsigned int�̂Ƃ��̒l�Ƃ͈قȂ�
    std::cout << u << std::endl;
    
    f = u; // unsigned int����float�ւ̈Öق̌^�ϊ�
           // �ƂĂ�����Ȑ����łȂ���΂����悻���Ȃ�
    std::cout << f << std::endl;
}
