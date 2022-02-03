#include <iostream>

int main() {

  int hunger = true;
  int anger = true;

  // Write the code below:
  //Style 1
  if (hunger==true && anger==true){
    std::cout << "Hangry\n";
  }

  //Style 2 also works since both are already bools
  if (hunger && anger){
    std::cout << "Hangry\n";
  }

}
