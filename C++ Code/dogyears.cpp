#include <iostream>
#include <string>

int main() {

//This will be setting the dogs current age
    int dog_age = 10;

//The first two years of a dogs life count as 21 human years hence the "21"
    int early_years = 21;

//Each following year counts as 4 human years hence the equation
    int later_years = (dog_age - 2) * (4);

// The sum of early_years and later_years combined to create human_years
    int human_years = early_years + later_years;

//This is a value to store the name of the dog
    std::string name;

//Basic Information on the dog

    std::cout << "What is your name? "; std::cin >> name;
    std::cout << "How old are you? "; std::cin >> dog_age;
    std::cout << "My name is " << name << "! Ruff ruff, I am " << human_years << " years old in human years\n";







}
