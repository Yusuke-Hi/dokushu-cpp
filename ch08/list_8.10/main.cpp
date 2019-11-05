#include <fstream>
#include <iostream>

int main()
{

    std::ofstream out{ "hello_binary.bin", std::ios::binary };

    // �l�Ԃ������Ƃ��ĔF���ł��Ȃ����l�𒼐ڏo��
    out.put(1);

    // �X�g���[�����Ԃ����̂ł��̂悤�ɘA�����ČĂԂ��Ƃ��ł���
    out.put(2).put(3);

    out.close();

    char a, b, c;
    std::ifstream in{ "hello_binary.bin", std::ios::binary };

    // 1�o�C�g�𒼐ړ���
    in.get(a);
    in.get(b).get(c); // get()�֐������l�ɘA�����ČĂׂ�
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
}
