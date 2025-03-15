#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

// void show(int v){
//   std::cout << v << std::endl;
// }

void enumerate(int *array, int *array_end, void (*show)(int v)){
  for (int i = 0; i < array_end - array; i++){
    show(array[i]);
  }
}

int main(){
  int array[] = {1,2,3,5,7,11,13};

  std::size_t length = sizeof(array) / sizeof(array[0]);
  enumerate(array, array + length, [](int v){std::cout << v << std::endl;});
}