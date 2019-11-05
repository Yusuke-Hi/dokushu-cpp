#include <iostream>
#include <string>

int main()
{
    // �������10�i���Ƃ���int�^�ɕϊ�
    std::cout << std::stoi("-10") << std::endl;

    // �������16�i���Ƃ���unsigned long�^�ɕϊ�
    std::cout << std::stoul("deadbeef", nullptr, 16) << std::endl;

    // �����񂩂��𔻒肵��long�^�ɕϊ�
    std::cout << std::stol("0755", nullptr, 0) << std::endl;

    // ������𕂓������_���Ƃ���double�^�ɕϊ�
    std::cout << std::stod("3.1415926") << std::endl;

    std::size_t idx = 0;
    // �������10�i���Ƃ���int�^�ɕϊ����A�ϊ��ł��Ȃ����������̃C���f�b�N�X��idx�Ɋi�[
    int integer = std::stoi("42.195", &idx);
    
    std::cout << integer << "; idx = " << idx << std::endl;
}
