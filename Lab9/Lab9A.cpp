#include <iostream> 


int main(){
    int arr[10], targetNum;
    bool isPresent = false;
    std::cout << "Please input 10 numbers\n";

    for(int i = 0; i < 10; i++){
        std::cout << "Integer " << i + 1 << ":";
        std::cin  >> arr[i];
    }
    
    std::cout << std::endl;
    std::cout << "What is the target number: ";
    std::cin  >> targetNum;
    std::cout << std::endl;

    for(int i = 0; i < 10; i++){
        if(arr[i] == targetNum){
            isPresent = true;
            break;
        }
    }

    if(isPresent == true){
        std::cout << "The target is in the set." << std::endl;
    }
    if(isPresent == false){
        std::cout << "The target is not in the set." << std::endl;
    }
    return 0;
}