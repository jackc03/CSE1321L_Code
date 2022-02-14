#include <iostream>
#include <string>

int main(){
    double miles, fridge, candy;
    std::cout << "Enter a number of miles: ";
    std::cin  >> miles;
    fridge = miles/.00105745;
    candy  = miles/.0000848327;
    std::cout << "You: I walked " << miles << " miles today #fitnessgoals" << std::endl;
    std::cout << "Useless Conversion Bot: Wow, " << miles << " miles is " << fridge << " refridgerators long!" << std::endl;
    std::cout << "Useless Conversion Bot: " << miles << " miles is also " << candy  << " candy bars long!"     << std::endl;
    std::cout << "Useless Conversion Bot: That's a lot.";
}
