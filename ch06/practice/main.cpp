#include <bits/stdc++.h>
using namespace std;

class A{
  int num;
  public:
    A(int num) : num(num){}
    A operator+(const A& n) const{
      return A{num + n};
    }
    A operator-(int n) const{
      return A{num - n};
    }
    A operator*(int n) const{
      return A{num * n};
    }
    A operator/(int n) const{
      return A{num / n};
    }
};



int main(){
  A x = 10;
  A y = 5;
  A z = 3;

  A a = x + y * z + x / z;
}