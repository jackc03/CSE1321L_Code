#include <iostream>
#include <cmath>
int main(){
    double quarters, dimes, nickles, pennies;
    std::cout << "Enter the number of quarters: ";
    std::cin  >> quarters;
    std::cout << "Enter the number of dimes: ";
    std::cin  >> dimes;
    std::cout << "Enter the number of nickels: ";
    std::cin  >> nickles;
    std::cout << "Enter the number of pennies: ";
    std::cin  >> pennies;
    std::cout << "\nYou entered " << quarters << " quarters." << std::endl;
    std::cout << "You entered " << dimes    << " dimes." << std::endl;
    std::cout << "You entered " << nickles  << " nickels." << std::endl;
    std::cout << "You entered " << pennies  << " pennies." << std::endl;
    int cost    = (quarters*25 + dimes*10 + nickles*5 + pennies);
    int dollars = floor((quarters*25 + dimes*10 + nickles*5 + pennies) / 100);
    int cents   = cost - dollars * 100;
    std::cout << "\nYour total is " << dollars << " dollars and " << cents << " cents." << std::endl;
}