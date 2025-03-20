#include <bits/stdc++.h>
using namespace std;



class p_alloc{
  int * ptr = nullptr;
  public:
    p_alloc(int num);
    ~p_alloc();
    int * operator->();
    int operator*();
    void show();
};

p_alloc::p_alloc(int num){
  ptr = new int;
  *ptr = num;
  std::cout << "constructor" << std::endl;
}

p_alloc::~p_alloc(){
  delete ptr;
  std::cout << "destructor" << std::endl;
}

int * p_alloc::operator->(){
  return ptr;
}

int p_alloc::operator*(){
  return *ptr;
}

void p_alloc::show(){
  std::cout << *ptr << std::endl;
}

int main(){
  p_alloc p(5);
  std::cout << *p << std::endl;
  // int ptr_ = p->;
}