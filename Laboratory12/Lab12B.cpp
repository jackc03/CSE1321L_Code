#include <iostream>
#include "Dog.h"

int main(){
    int dogAge;
    double dogWeight, howMuchFood;
    std::string dogName, dogFurColor, dogBreed, newName;
    
    std::cout << "You are about to create a dog.\nHow old is the dog: ";
    std::cin  >> dogAge;

    std::cout << "How much does the dog weigh: ";
    std::cin  >> dogWeight;

    std::cout << "What is the dog's name: ";
    std::cin.ignore(1, '\n');
    std::getline(std::cin, dogName);
    
    std::cout << "What color is the dog: ";
    std::getline(std::cin, dogFurColor);

    std::cout << "What breed is the dog: ";
    std::getline(std::cin, dogBreed);

    Dog d1(dogAge, dogWeight, dogName, dogFurColor, dogBreed);
    std::cout << d1.name << " is a 5 year old " << d1.furColor << " " << d1.breed << " that weighs " << d1.weight << " lbs." << std::endl;

    d1.bark();

    std::cout << d1.name << " is hungry how much should he eat: ";
    std::cin  >> howMuchFood;
    d1.eat(howMuchFood);

    std::cout << d1.name << " isn't a very good name. What should they be renamed to: ";
    std::cin.ignore(1, '\n');
    std::getline(std::cin, newName);
    d1.rename(newName);

    std::cout << d1.name << " is a 5 year old " << d1.furColor << " " << d1.breed << " that weighs " << d1.weight << " lbs." << std::endl;

    system("pause");
    return 0;
}