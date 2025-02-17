#include <string>
#include <iostream>

class Book{
  

  public:
  std::string title;
  std::string writer;
  int price;
  
  Book(std::string title, std::string writer, int price);
  Book(const Book& other);
};

Book::Book(std::string title, std::string writer, int price):
  title(title), writer(writer), price(price){}

Book::Book(const Book& other):
  title(other.title), writer(other.writer), price(other.price) {}

int main(){
  Book b("Tokyo", "Yamada", 950);
  Book c(b);
  std::cout <<c.title << ": " << c.writer << ": " << c.price << std::endl;
}
