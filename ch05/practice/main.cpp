#include <iostream>

void reverse(int * array, int size){
  int array_tmp[size];
  for (int i = 0; i < size; i++){
    array_tmp[i] = array[i];
  }

  for (int i = 0; i < size; i++){
    array[i] = array_tmp[size - 1 - i];
  }
}

int main(){
  int array[] = {0, 1, 2, 3, 4};
  reverse(array, 5);

  for (int i = 0; i < 5; i++){
    std::cout << array[i] << std::endl;
  }
  std::cout << std::endl;

  int (*ptr)[5] = &array;
  for (int * ptr = array; ptr != (array + 5); ptr++){
    std::cout << *ptr << std::endl;
  }
}