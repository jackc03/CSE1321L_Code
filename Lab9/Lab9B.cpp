#include <iostream>
#include <cmath>

void sort(int z[], int sizeZ){
    bool isPresent = false;
    int temp;

    for(int i = 0; i < sizeZ; i++) {
        for(int j = i + 1; j < sizeZ; j++)
        {
            if(z[j] < z[i]) {
                temp = z[i];
                z[i] = z[j];
                z[j] = temp;
            }
        }
    }
    //return z;
}


bool search(int x, int y, int z[]){
    bool present = false;
    int min, max, median;
    min = 0;
    max = y-1;
    median = max/2;
    while(min <= max){
        std::cout << "Searching\n" << std::endl;
        median = (min+max) / 2;
        std::cout << "Low is " << z[min] << "\n\n";
        std::cout << "High is " << z[max] << "\n\n";
        std::cout << "Mid is " << z[median] << "\n\n";

        if(z[median] == x){
            present = true;
            break;
        }

        else if(z[median] > x){
            max = median - 1;
        }
        else if(z[median] < x){
            min = median + 1;
        }
    }
    return present;
}


int main(){
    const int n = 11;
    int arr[n], targetNum, temp, *p;
    bool isPresent = false;
    std::cout << "Please input 11 numbers\n";
    for(int i = 0; i < n; i++){
        std::cout << "Integer " << i + 1 << ":";
        std::cin  >> arr[i];
    }
    
    std::cout << std::endl;
    std::cout << "What is the target number: ";
    std::cin  >> targetNum;
    std::cout << std::endl;
    
    std::cout << "\n" << std::endl;
    sort(arr, n);
    std::cout << "The sorted set is: ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << "\t";
    }

    isPresent = search(targetNum, n, arr);

    if(isPresent == true){
        std::cout << "The target is in the set" << std::endl;
    }
    else if(isPresent == false){
        std::cout << "The target is not in the set" << std::endl;
    }
    std::cout<< "Enter 'q' to QUIT: ";
    char ch = '\0';
    while(ch != 'q')
        ch = getchar();
    return 0;
}