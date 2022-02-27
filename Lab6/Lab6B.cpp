#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    int randomNumber, correctNumber, counter;
    srand((unsigned) time(0));
    counter = 0;
    std::cout << "Enter a number between 1 and 1000: ";
    std::cin  >> correctNumber;
    do  {
        randomNumber = (rand() % 1000 + 1);
        std::cout << "My guess was " << randomNumber << std::endl;
        counter += 1;
    }
    while(randomNumber != correctNumber);
    std::cout << "I guessed the number was " << correctNumber << " and it only took me " << counter << " guesses" << std::endl;
    return 0;
}