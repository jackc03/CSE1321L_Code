#include <iostream>
#include <cmath>

int main(){
    int rowsize, columnsize, cellCount, cellCounter;
    cellCounter = 1;
    std::cout << "Please enter the number of rows: ";
    std::cin  >> rowsize;
    std::cout << "Please enter the number of columns: ";
    std::cin  >> columnsize;
    int arr[rowsize][columnsize] = {0};
    cellCount = rowsize * columnsize;
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
    system("pause");
}