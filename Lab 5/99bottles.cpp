#include <iostream>

int main() {

  // Write a for loop here:
  // Decrementing loop

  for (int i = 99; i > 0; i--){
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    //this will be printed twice since remaining bottles will be printed at the top anyway.
    std::cout << i-1 << " bottles of pop on the wall.\n";
  }













}
