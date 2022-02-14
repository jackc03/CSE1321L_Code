#include <iostream>
#include <math.h>

int main(){
    double Number, NewNumber;
    int choice;
    std::cout << "Welcome!\nPlease input a number: ";
    std::cin  >> Number;
    std::cout << "\nWhat would you like to do to this number: "<< std::endl;
    std::cout << "0- Get the additive inverse of the number" << std::endl;
    std::cout << "1- Get the reciprocal of the number" << std::endl;
    std::cout << "2- Square the number" << std::endl;
    std::cout << "3- Cube the number" << std::endl;
    std::cout << "4- Exit the program\n" << std::endl;
    std::cin  >> choice;
    std::cout << std::endl;
    if(choice == 0){
        NewNumber = Number - (2 * Number);
        std::cout << "The additive inverse of " << Number << " is " << NewNumber << std::endl;
    }
    else if(choice == 1){
        NewNumber = 1 / Number;
        std::cout << "The reciprocal of " << Number << " is " << NewNumber << std::endl;
    }
    else if(choice == 2){
        NewNumber = pow(Number, 2);
        std::cout << "The square of " << Number << " is " << NewNumber << std::endl;
    }
    else if(choice == 3){
        NewNumber = pow(Number, 3);
        std::cout << "The cube of " << Number << " is " << NewNumber << std::endl;
    }
    else if (choice == 4){
        std::cout << "Thank you, goodbye!" << std::endl;
    }
    else { 
        std::cout << "Invalid input, please try again!" << std::endl;
    }
    system("pause");
    return 0;
}