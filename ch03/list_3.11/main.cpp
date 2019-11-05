#include <iostream>

class Book
{
    std::string title = "";
    int page = 0;

public:
    Book();
    explicit Book(std::string title, int page);

    void show() const;
};

// page�̓����o�[���������X�g�ŏȗ������̂�NSDMI�̃f�t�H���g�l���g���ď����������
Book::Book()
    : title("untitled")
{
}

// �����o�[���������X�g�ŗ^���������l���g����
Book::Book(std::string title, int page)
    : title(title), page(page)
{
}

void Book::show() const
{
    std::cout << title << " " << page << "�y�[�W" << std::endl;
}

int main()
{
    Book nsdmi; // NSDMI

    nsdmi.show();

    Book old_edition{ "�ƏKC++ ��4��", 568 };

    old_edition.show();
}
