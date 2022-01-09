#include <iostream> 
#include <stdlib.h>

  int main () {
/*
  Rock Paper Scissors Lizard Spock 
  (The Big Bang Theory)
*/

// Calculating the Computers Decision
  srand (time(NULL)); 
  int computer = rand() % 3 + 1; 
  int user = 0; 

// The introduction to the game 
  std::cout << "=======================\n"; 
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "=======================\n"; 

  std::cout << "1) Rock\n"; 
  std::cout << "2) Paper\n"; 
  std::cout << "3) Scissors\n"; 

  std::cout << "Shoot!\n"; 

// Grabbing the User input 
  std::cin >> user; 

// Conditionals to choose the winner

// Possibilities of Rock 
  if (user == 1 && computer == 1) {
    std::cout << "Tie\n"; 
  } else if (user == 1 && computer == 2) {
      std::cout << "Computer Wins!\n";
  } else if (user == 1 && computer == 3) {
      std::cout << "User Wins!\n"; 
  } else if (user == 2 && computer == 1) {
      std::cout << "User Wins!\n"; 
  } else if (user == 3 && computer == 1) {
      std::cout << "User Wins!\n"; 
  }

// Possibilities of Paper
  if (user == 2 && computer == 2) {
    std::cout << "Tie\n"; 
  } else if (user == 2 && computer == 1) {
      std::cout << "User Wins!\n"; 
  } else if (user == 2 && computer == 3) {
      std::cout << "Computer Wins!\n"; 
  } else if (user == 1 && computer == 2) {
      std::cout << "Computer Wins!\n"; 
  } else if (user == 3 && computer == 2) {
      std::cout << "User Wins!\n"; 
  }

// Possibilities of Scissors 
  if (user == 3 && computer == 3) {
    std::cout << "Tie\n"; 
  } else if (user == 3 && computer == 1) {
      std::cout << "Computer WinsI\n"; 
  } else if (user == 3 && computer == 2) {
      std::cout << "User Wins!\n"; 
  } else if (user == 1 && computer == 3) {
      std::cout << "User Wins!\n"; 
  } else if (user == 2 && computer == 3) {
      std::cout << "Computer Wins!\n"; 
  }
}
