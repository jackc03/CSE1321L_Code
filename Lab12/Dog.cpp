#include <iostream>
#include "Dog.h"

Dog::Dog(int age, double weight, std::string name, std::string furColor, std::string breed)
    : this.age(age), this.weight(weight), this.name(name), this.furColor(furColor), this.breed(breed)
    {
        
    }

void Dog::bark(){
    std::cout << "Woof! Woof!" << std::endl;
}

std::string Dog::rename(std::string newName){
    name = newName;
    return name;
}

double Dog::eat(double food){
    weight = weight + food;
    return weight;
}