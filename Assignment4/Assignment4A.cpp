#include <iostream>

int main(){
    int endParameter, number;
    bool loop1, loop2;
    loop1 = true;
    loop2 = true;
    while(loop1 == true){
        std::cout << "[Times Table Generator]\nEnter your start number: ";
        std::cin  >> number;
        if(number > 0){
            loop1 = false;
        }
        if(number <= 0){
            std::cout << "Input must be positive! Try again." << std::endl;
        }
    }
    while(loop2 == true){
        std::cout << "Enter the limit you want to multiply to: ";
        std::cin  >> endParameter;
        if(endParameter > 0){
            loop2 = false;
        }
        if(endParameter <= 0){
            std::cout << "Input must be positive! Try again." << std::endl;
        }
    }
        for(int i = 1; i <= endParameter; i++){
            std::cout << number << " * " << i << " = " << number * i << std::endl;
        }
    return 0;
}