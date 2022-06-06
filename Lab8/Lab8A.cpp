#include <iostream>
#include <cmath>

int main(){
    int arr1[5], arr2[5], result[5];
    std::cout << "Please enter 5 integers for the first array: " << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << "Integer " << i + 1 << ": ";
        std::cin  >> arr1[i];
    }
    std::cout << "\nPlease enter 5 integers for the second array: " << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << "Integer " << i + 1 << ": ";
        std::cin  >> arr2[i];
    }
    std::cout << "\nThe resulting sums are ";
    for(int i = 0; i < 5; i++){
        result[i] = arr1[i] + arr2[i];
        std::cout << result[i] << "|";
    }
    return 0;
}