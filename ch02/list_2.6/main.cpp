#include <iostream>

enum class Category
{
    Value1, // �擪�͖����I�Ɏw�肵�Ȃ�����ÖٓI��0
    Value2, // �l���ȗ������ꍇ�ɂ�1��̐����̎��i�����1�j
    Value3 = 100, // 1��̎��̐������ƍ���ꍇ�ɖ����I�Ɏw��ł���
    Value4, // �ēx�ȗ������ꍇ�ɂ�1��̐����̎��i�����101�j
};

int main()
{
    // �񋓑̂̕ϐ���錾����Value3�ŏ�����
    Category cat = Category::Value3;

    // �񋓑̂̒l�ɑΉ����������𓾂�
    std::cout << static_cast<int>(cat) << std::endl;
}
