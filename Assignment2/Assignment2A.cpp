#include <iostream>
#include <cmath>


int main(){
    double input, limit, multiple;
    std::cout << "Enter a number you want to find a multiple of: ";
    std::cin  >> input;
    std::cout << "Enter a second number: ";
    std::cin  >> limit;
    multiple = 3 * floor(limit/input);
    std::cout <<"Calculating...\nThe nearest multiple of " << input << " from " << limit << " is " << multiple;
}