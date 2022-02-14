#include <iostream>

int main(){
    int num;
    std::cout << "Enter an integer: ";
    std::cin  >> num;
    switch(num % 2){
        case 0:
            std::cout << "This number is divisible by 2" << std::endl;
            break;
        default:
            switch(num % 3){
                case 0:
                    std::cout << "This number is divisible by 3" << std::endl;
                    break;
                default:
                    switch(num % 5){
                        case 0:
                            std::cout << "This number is divisible by 5" << std::endl;
                            break;
                        default:
                            std::cout << "This number is undetermined" << std::endl;
                            break;
                    }
            }
    
    }
    return 0;
}