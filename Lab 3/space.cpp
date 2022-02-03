#include <iostream>

int main() {

  //Prompt weight on earth
  double w_earth;
  std::cout << "Enter weight on earth: ";
  std::cin >> w_earth;

  //Prompt space
  int space;
  double w_space;
  std::cout << "Where do you want to go? Pick between 1-7 :";
  std::cin >> space;

  switch(space)
  {
    case 1:
      w_space = w_earth * 0.38;
      break;
    case 2:
      w_space = w_earth * 0.91;
      break;

    //even without default, program still runs. its like if, else if and no else
  }

  std::cout << "\nYour weight is " << w_space;

}
