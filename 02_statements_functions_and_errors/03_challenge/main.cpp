#include <iostream>

int power(int base, int exponent=2){
    int power{base};
    for(int i = 1; i < exponent; i++){
        power = power*base;
    }
    return power;
}

int main() {
  int base = 3;
  int exponent = 4;
  std::cout << power(3, 4) << std::endl;
  return 0;
}