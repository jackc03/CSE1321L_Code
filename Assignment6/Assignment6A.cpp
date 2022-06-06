#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>


int binarySearch(int x, int y, int z[]){
    int min, max, median;
    min = 0;
    max = y-1;
    median = max/2;
    int count = 0;

    while(min <= max){
        median = (min+max) / 2;
        count ++;

        if(z[median] == x){
            break;
        }

        else if(z[median] < x){
            max = median - 1;
        }
        else if(z[median] > x){
            min = median + 1;
        }
        
    }
    return count;
}


int main(){
    int n = 1000000;
    int arr[n];
    int value = 999999;
    int binaryCount, linearCount, targetNUM;
    linearCount = 0;
    srand(time(NULL));
    targetNUM = rand() % 1000000;
    std::cout << "[Linear Vs. Binary Search]\nThe target value is " << targetNUM << std::endl;

    for(int i = 0; i < n; i++){
        arr[i] = value;
        value--;
        //std::cout << arr[i] << std::endl;
    }

    for(int i = 99999; i <= 0; i--){
        linearCount++;
        if(arr[i] == targetNUM){
            break;
        }
    }

    binaryCount = binarySearch(targetNUM, 100000, arr);

    std::cout <<"Linear Search: " << linearCount << " loop(s)\nBinary Search: " << binaryCount << " guess(es)" << std::endl;
    if(binaryCount < linearCount){
        std::cout <<  "Binary Search is faster this time!" << std::endl;
    }
    else if(linearCount < binaryCount){
        std::cout << "Linear Search is faster this time!" << std::endl;
    }
    
    return 0;

}