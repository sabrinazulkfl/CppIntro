#include <iostream>

int main() {

  double tempF = 0;
  std::cout << "Convert F to C; Input your temperature in F\n";
  //Prompt for temperature in F
  std::cin >> tempF;

  //Convert F to C
  double tempC = (tempF - 32)/1.8;
  std::cout << "Temperature is " << tempC << "C\n";

}
