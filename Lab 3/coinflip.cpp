#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

  // Create a number that's 0 or 1
  srand (time(NULL)); // generate a different succession of results in the subsequent calls to rand.
  int	coin = rand() % 2; // coin in the range 0 to 1

  // If number is 0: Heads
  // If it is not 0: Tails
  if (coin == 0) {

    std::cout << "Heads\n";

  }
	else {

    std::cout << "Tails\n";

  }

}
