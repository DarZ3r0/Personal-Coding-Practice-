#include <iostream> 

/* This program has the user input a year and calculates whether it is a leap year based on the following criteria:
      1. If the year can be evenly divided by 4 then it is a leap year 
      2. IF that year cna be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year
      3. IF that year is evenly divisible by 400, then it is not a leap year
*/
  int main() {

    int year; 

// This shows the year value inputed by the user
    std::cout << "What is the current year? "; std::cin >> year; "\n";  
  
// This calculates whether the year is a leap year or not 
    if (year < 1000 || year > 9999) {
      std::cout << "Invalid entry. \n"; 
  }  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
      std::cout <<"\n" << year << " falls on a leap year.\n";  
  }  else {
      std::cout <<"\n" << year << " is NOT a leap year\n"; 
  }

}
