#include <iostream>

int main(){
    double amtOwed, APR, MPR, MinPayment;
    std::cout << "Amount owed: $";
    std::cin  >> amtOwed;
    std::cout << "APR: ";
    std::cin  >> APR;
    MPR = APR/12;
    APR = APR/100;
    MinPayment = amtOwed * APR / 12;
    std::cout << "Monthly percentage rate: " << MPR << std::endl;
    std::cout << "Minimum payment: $" << MinPayment << std::endl;
}