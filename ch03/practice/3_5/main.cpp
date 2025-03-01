#include <iostream>
class A{
  public:
    
    static int v;
    void change_static_member(int new_value) const;

  private:
  
    int value = 10;
};

int A::v = 100;

void A::change_static_member(int new_value) const{
  A::v = new_value;
}

int main (){
  A a;

  a.change_static_member(500);

  std::cout << a.v << std::endl;

}

// #include <iostream>

// int main(){
//   std::cout << "ok" << std::endl;
// }