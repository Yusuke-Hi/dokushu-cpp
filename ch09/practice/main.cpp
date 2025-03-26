#include <iostream>
#include <string>


template <typename T>
class A{
  public:
    T method(T value);
};

template<typename T>
T A<T>::method(T value){
  return value;
}

int main(){
  A<int> a;
  std::cout << a.method(15) << std::endl;
}