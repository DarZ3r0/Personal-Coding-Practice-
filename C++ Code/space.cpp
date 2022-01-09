#include <iostream>
#include <string>

int main() {

  double weight;
  int planetNum;


  std::cout << "What is your weight on Earth? "; std::cin >> weight;

  std::cout << "\nI have informaiton for the following planets: \n\n";
  std::cout << "  1. Mercury  2. Venus   3. Earth    4. Mars\n";
  std::cout << "  5. Jupiter  6. Saturn  7. Uranus   8. Neptune\n\n";

  std::cout << "What number planet would you like to fight on? "; std::cin >> planetNum;



  if (planetNum == 1) {
    weight = weight * 0.38;
  } else if (planetNum == 2) {
    weight = weight * 0.91;
  } else if (planetNum == 3) {
    weight = weight;
  } else if (planetNum == 4) {
    weight = weight * 0.38;
  } else if (planetNum == 5) {
    weight = weight * 2.34;
  } else if (planetNum == 6) {
    weight = weight * 1.06;
  } else if (planetNum == 7) {
    weight = weight * 0.92;
  } else if (planetNum == 8) {
    weight = weight * 1.19;
  }

  switch (planetNum) {

    case 1:
      std::cout << "\nYour weight on Mercury is: " << weight << " lbs\n";
      break;

    case 2:
      std::cout << "\nYour weight on Venus is: " << weight << " lbs\n";
      break;

    case 3:
      std::cout << "\nYour weight on Earth is: " << weight << " lbs\n";
      break;

    case 4:
      std::cout << "\nYour weight on Mars is: " << weight << " lbs\n";
      break;

    case 5:
      std::cout << "\nYour weight on Jupiter is: " << weight << " lbs\n";
      break;

    case 6:
      std::cout << "\nYour weight on Saturn is: " << weight << " lbs\n";
      break;

    case 7:
      std::cout << "\nYour weight on Uranus is: " << weight << " lbs\n";
      break;

    case 8:
      std::cout << "\nYour weight on Neptune is: " << weight << " lbs\n";
      break;

    default:
      std::cout << "\nError: Please choose a proper Planet Number\n";
      break;
  }
}
