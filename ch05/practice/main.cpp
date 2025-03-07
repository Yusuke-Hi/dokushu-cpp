#include <iostream>
#include <string>
#include <vector>
class product{
  int id = 0;
  std::string name = "not available";
  int price = -1;

  public:
    product() {}
    explicit product(int id, std::string name, int price):
    id(id), name(name), price(price){}
};

int main(){

  std::vector<product> p;
  p.push_back(product{1, "smart phone", 60000});
  p.push_back(product{2, "tablet", 35000});
  p.push_back(product());
  p.push_back(product());

}