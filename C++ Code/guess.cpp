#include <iostream>

  int main () {
    
/*
  This program utilizes a while loop to have a set number produce a correct result
*/
    int guess; 
    int tries;  

  std::cout << "I have a number 1-10.\n"; 
  std::cout << "Please guess it: "; std::cin >> guess; 

  while (guess != 8 && tries < 3) {
    std::cout << "Wrong guess, try again: "; std::cin >> guess; 
    tries++; 
  }

  if (guess == 8) {
    std::cout << "You got it\n"; 
  }
}
