#include <iostream>
#include <cmath>

int main(){
    int rowsize, columnsize, cellCount, cellCounter, projCounter;
    cellCounter = 1;
    projCounter = 0;
    std::cout << "Please enter the number of rows: ";
    std::cin  >> rowsize;
    std::cout << "Please enter the number of columns: ";
    std::cin  >> columnsize;
    int arr[rowsize][columnsize] = {0};
    cellCount = rowsize * columnsize;
    int proj[cellCount] = {0};
    
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            arr[i][j] = cellCounter;
            cellCounter++;
        }
    }


    std::cout << "I have " << rowsize << " rows and " << columnsize << " columns. I need to fill-up " << cellCount << " spaces.\n" << std::endl;
    std::cout << "The " << rowsize << "x" << columnsize << " array:" << std::endl;
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            std::cout << arr[i][j] << "|";
        }
        std::cout << std::endl;
    }
    
    
    for(int i = 0; i < rowsize; i++){
        for(int j = 0; j < columnsize; j++){
            proj[projCounter] = arr[i][j];
            projCounter++;
        }    
    }


    std::cout << "\nThe " << rowsize << "x" << columnsize << " 2-D array flattened into a " << cellCount << " cell 1-D array:" << std::endl;
    for(int i = 0; i < cellCount; i++){
        std::cout << proj[i] << "|";
    }
    
    return 0;
}