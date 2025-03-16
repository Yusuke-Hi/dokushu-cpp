#include <bits/stdc++.h>
using namespace std;

class Float{
  private:
    float value = 1.5;
};


int main(){
  std::unique_ptr<Float> f = std::make_unique<Float>();
}