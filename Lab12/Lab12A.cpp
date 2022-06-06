#include <iostream>
#include "Chair.h"


int main(){
    int LegNumber;
    std::string wheelInput;
    bool wheels;
    std::string materials;
    std::cout << "You are about to create a chair.\nHow many legs does your chair have: ";
    std::cin  >> LegNumber;
    std::cout << "Is your chair rolling (true/false): ";
    std::cin  >> wheelInput;

    if(wheelInput.compare("true") == 0){
        wheels = true;
    }
    else if(wheelInput.compare("false")){
        wheels = false;
    }

    std::cout << "What is your chair made of: ";
    std::cin  >> materials;
    std::cout << std::endl;

    Chair chair1(LegNumber, wheels, materials);
    if(wheels == true){
        std::cout << "Your chair has " << chair1.numOfLegs << " legs, is rolling, and is made of " << chair1.material << "." << std::endl;
    }
    else if(wheels == false){
        std::cout << "Your chair has " << chair1.numOfLegs << " legs, is not rolling, and is made of " << chair1.material << "." << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "This program is going to change that." << std::endl;
    std::cout << std::endl;

    chair1.material  = "wood";
    chair1.rolling   = false;
    chair1.numOfLegs = 4;
    std::cout << "Your chair has " << chair1.numOfLegs << " legs, is rolling, and is made of " << chair1.material << "." << std::endl;

    return 0;
}