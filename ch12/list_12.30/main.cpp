#include <map>
#include <iostream>

int main()
{
    std::map<std::string, float> w; // ���Ό��q����
    w["H"] = 1.00f; // ���f
    w["O"] = 15.99f; // �_�f
    w["Cl"] = 34.97f; // ���f
    w["?"];

    // �i�g���E���Astd::pair�̃e���v���[�g�p�����[�^�[�͐��_���Ă���
    w.insert(std::pair{ "Na", 22.99f });

    // �\�����������g����pair���g�킸�ɒ��ڗv�f��W�J�ł���
    // for (const std::pair<const std::string, int>& item : w)
    for (const auto& [key, value] : w)
    {
        std::cout << key << ':' << value << std::endl;
    }

    // ���_���i�g���E���̕��q��
    std::cout << "NaOH = " << w["Na"] + w["O"] + w["H"] << std::endl;
}