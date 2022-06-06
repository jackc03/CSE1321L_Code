#include <iostream>
#include <iomanip>

int main(){
    int length;
    int sum;
    std::cout << "[Fibonacci Sequence Generator]" << std::endl;
    while(true){
        std::cout << "how long should the Fibonacci sequence be?: ";
        std::cin  >> length;
        if(length > 0){
            break;
        }
        if(length <= 0){
            std::cout << "Sequences must be larger than 0!" << std::endl;
        }
    }
    double arr[length];
    arr[0] = 0;
    arr[1] = 1;
    std::cout << arr[0] << ", " << arr[1] << ", ";
    for(int i = 2; i <= length-1; i ++){
        arr[i] = arr[i-1] + arr[i-2];
        if(i<= length-2){
            std::cout << std::fixed << std::setprecision(0) << arr[i] << ", ";
        }
    }
    std::cout << std::fixed << std::setprecision(0) << arr[length-1] << std::endl;
    return 0;
}