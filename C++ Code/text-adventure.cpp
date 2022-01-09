#include <iostream>

  int main () {

/* This will depict the story of a random MMO like storyline hopefully you enjoy */

// This is the background of the story

  std::cout << 
  "Once upon a time there was a great plague that ravaged the nation."
  "It left millions devestated at the numner of losses suffered by society."
  "Over time in the fire a healing warrior was born to combat the plague."
  "However, he unforntunately vanished into the night. Never to be seen again.\n\n\n";

  std::cout << 
  "Now one worthy of being called savior has emerged again; however,"
  "with great power comes, great responsibility...\n\n\n";

// Gender Selection 

  int gender; 

  std::cout << "Please select your gender number: 1) Male     2)Female\n";std::cin >> gender; 


  if (gender == 1) {
    std::cout << "You are a Man!\n\n"; 
  } else if (gender == 2) {
    std::cout << "You are a Woman!\n\n"; 
  } else {
    std::cout << "Invalid input... try again"; 
  }

// Gender Path: Male 

  int mStory101; 
  if (gender == 1) {
    std::cout << "You are now a grown adult, and you see a woman in need what do you do?\n\n\n";
    std::cout << "1) Help the woman in need   2) Keep walking passed the woman  3) Give the woman food\n\n\n";
    std::cout << "Select a number option: "; std:: cin >> mStory101; "\n\n";   
  } 

  if (mStory101 == 1) {
    std::cout << "You bring the helpless woman back to your home and provide her with housing and food\n"; 
  } else if (mStory101 == 2) {
    std::cout << "Your walking and take a short-cut through an alley where you are approached by suspicious men\n"; 
  } else if (mStory101 == 3) {
    std::cout << "The woman thanks you and you go on about your day\n"; 
  }



}
