#include <iostream>

int main()
{
    char buffer[256];
    std::cin.getline(buffer, 256); // ���s������������܂œǂݍ��݁A���s��������菜��

    // getline()�̓k���ŏI�[����̂ł��̂܂ܕ�����Ƃ��ďo�͂��Ė��Ȃ�
    std::cout << "buffer: " << buffer << std::endl;
    
    // , ����؂蕶���Ƃ��ēǂݍ��݁A��؂蕶���͎c���Ă���
    std::cin.get(buffer, 256, ',');
    
    // get()���k���ŏI�[����̂ł��̂܂܏o�͂Ɏg���Ė��Ȃ�
    std::cout << "buffer: " << buffer << std::endl;
    
    std::cin.get(buffer, 256, ',');
    // �擪�ɑO��̋�؂蕶�����c���Ă���̂�
    // �o�b�t�@�[�͋�ɂȂ�
    if (buffer[0] == '\0')
    {
        std::cout << "�o�b�t�@�[�͋�" << std::endl;
    }
}
