#include <charconv>
#include <iostream>

int main()
{
    char buffer[16] = {};

    // 10�i���̐����Ƃ��ĕ�����֕ϊ�
    auto result = std::to_chars(buffer, buffer + 15, 10);
    *result.ptr = '\0'; // �k�������ŏI�[
    std::cout << buffer << std::endl;

    int val = 0;
    // 10�i���̐����Ƃ��ĕ����񂩂�ϊ�
    std::from_chars(buffer, buffer + 16, val);
    std::cout << val << std::endl;

    // 16�i���̐����Ƃ��ĕ�����֕ϊ�
    result = std::to_chars(buffer, buffer + 15, 0xdeadbeef, 16);
    *result.ptr = '\0'; // �k�������ŏI�[
    std::cout << buffer << std::endl;
    
    // 16�i���̐����Ƃ��ĕ����񂩂�ϊ�
    std::to_chars(buffer, buffer + 16, val, 16);
    std::cout << val << std::endl;
    
    // �Ȋw�Z�p�\�L�̕��������_���Ƃ��ĕ�����ɕϊ�
    result = std::to_chars(buffer, buffer + 15, 3.14,
        std::chars_format::scientific);
    *result.ptr = '\0'; // �k�������ŏI�[
    std::cout << buffer << std::endl;
    
    double fval = 0;
        // �����Ńt�H�[�}�b�g�����o���ĕ����񂩂�ϊ�
    std::from_chars(buffer, buffer + 16, fval);
    std::cout << val << std::endl;
}