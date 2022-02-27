#include <iostream>

int main(){
    int limit;
    std::cout << "Please enter a value for the size: ";
    std::cin  >> limit;
    std::cout << "This is the requested " << limit << "x" << limit << " right triangle:" << std::endl;
    for(int i = 1; i <= limit; i++){
        for(int j = 1; j <= i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}