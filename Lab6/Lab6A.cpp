#include <iostream>

int main(){
    int currentnum, biggestnum;
    biggestnum = 0;
    std::cout << "Please enter 10 numbers and this program will display the largest." << std::endl;
    for(int i = 1; i <= 10; i++){
        std::cout << "Please enter number " << i << ":";
        std::cin  >> currentnum;
        if(currentnum > biggestnum){
            biggestnum = currentnum;
        }
    }
    std::cout << "\nThe largest number was " << biggestnum << std::endl;
    return 0;
}