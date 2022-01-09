#include <iostream>
#include <cstdlib> 

/* This is a program that randomizes nuumbers and produces a result. At the moment it's the possibilities of my heart. */


  int main() {

// Shows the title of the Program 
    std::cout << "MAGIC 8-BALL\n"; 

// General Variables 
    srand(time(NULL));
    int answer = std::rand() % 10; 
    
// The randomizer of the program 
    std::cout << answer << "\n"; 

// The Possiblities 
    if (answer == 0) {
      std::cout << "It is certain\n"; 
  } else if (answer == 1) {
      std::cout << "Maybe she loves you\n"; 
  } else if (answer == 2) {
      std::cout << "Maybe she just likes you\n"; 
  } else if (answer == 3) {
      std::cout << "Maybe she hates you\n"; 
  } else if (answer == 4) {
      std::cout << "Maybe she lost feelings\n";
  } else if (answer == 5) {
      std::cout << "Maybe she's scared\n"; 
  } else if (answer == 6) {
      std::cout << "Maybe she'll call you\n"; 
  } else if (answer == 7) {
      std::cout << "Maybe she'll text you\n";
  } else if (answer == 8) {
      std::cout << "Maybe she will break your heart\n"; 
  } else {
      std::cout << "Very doubtful\n"; 
  }



















}
