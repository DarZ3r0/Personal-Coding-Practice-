#include <iostream>
#include <iomanip>

int main () {

    double miles;


    std::cout << "Enter the distance ran in miles: "; std::cin >> miles;
    double kilometers = (miles * 2);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "You ran " << kilometers << " kilometers\n";

    return 0;
}
