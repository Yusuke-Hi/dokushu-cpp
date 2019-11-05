#include <string>
#include <iostream>

int main()
{
    // �󔒂܂��̓J���}����؂蕶���Ƃ��ĕ������؂�o��
    std::string str = "C,C++,Java,Ruby,";
    std::string delim = ","; // ��؂蕶���i�󔒂܂��̓J���}�j
 
    std::string::size_type fpos = 0;
    while ((fpos = str.find_first_not_of(delim, fpos))
        != std::string::npos)
    {
        // lpos�Ffpos�ȍ~�Adelim�Ɋ܂܂�镶���̈ʒu
        auto lpos = str.find_first_of(delim, fpos);
    
        // ������ƊJ�n�ʒu�ƒ����ŏ�����
        std::string token(str, fpos, lpos - fpos);
        std::cout << "[" << token << "] ";
        fpos = lpos;
    }
    std::cout << std::endl;
}
