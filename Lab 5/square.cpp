#include <iostream>

int main() {

  int i = 0;
  int square = 0;

  // Write a while loop here:

  while (i < 10){ // or (i<= 9) also works
    square = i * i;
    std::cout << i << "\t" << square << "\n";
    i++;
  }

}
