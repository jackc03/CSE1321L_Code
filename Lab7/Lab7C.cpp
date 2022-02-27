#include <iostream>

int main(){
    int limit;
    std::cout << "Please enter a value for the size: ";
    std::cin  >> limit;
    std::cout << "This is the requested " << limit << "x" << limit << " right-triangle:" << std::endl;
    for(int i = 0; i <= limit - 1; i++){
        for(int k = 1; k <= limit - i; k++){
            std::cout << " ";
        }
        for(int j = limit; j >= limit - i; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}