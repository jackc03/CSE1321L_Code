#include <iostream>

char moveUP(char arr[5][5], int xPOS, int yPOS){
    if(yPOS - 1 >= 0){
        if(arr[yPOS-1][xPOS] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS-1][xPOS] == '_' || arr[yPOS-1][xPOS] == 'W'){
            arr[yPOS-1][xPOS] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
    }
    return arr[5][5];
}
char moveDOWN(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS+1][xPOS] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS+1][xPOS] == '_' || arr[yPOS+1][xPOS] == 'W'){
            arr[yPOS+1][xPOS] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
    }
    return arr[5][5];
}
char moveLEFT(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS][xPOS-1] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS][xPOS-1] == '_' || arr[yPOS][xPOS-1] == 'W'){
            arr[yPOS][xPOS-1] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
    }
    return arr[5][5];
}
char moveRIGHT(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS][xPOS+1] == 'X'){
            arr[yPOS][xPOS]     = '_';
        }
        if(arr[yPOS][xPOS+1] == '_' || arr[yPOS][xPOS+1] == 'W'){
            arr[yPOS][xPOS+1] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
    }
    return arr[5][5];
}


int main(){
    bool tempWin, winTest, wallTest;
    int xPosition, yPosition, runCounter;
    xPosition = 0;
    yPosition = 0;
    char playSpace[5][5] = {{'O','X','_','X','X'},{'_','X','_','X','W'},{'_','_','_','X','_'},{'X','X','_','_','_'},{'_','_','_','X','X'}};
    std::string input;
    winTest = false;
    std::cout << "[Maze Game]" << std::endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << playSpace[i][j] << '.';
        }
        std::cout << std::endl;
    }

    while(winTest == false){
        if(runCounter !=1){
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    std::cout << playSpace[i][j] << '.';
                }
                std::cout << std::endl;
            }
        }

        runCounter++;
        tempWin = false;
        wallTest = false;
        std::cout << "Which direction do you want to move? ";
        std::getline(std::cin, input);

        if(input.compare("Up") == 0){
            if(yPosition - 1 < 0){
                std::cout << "You can't move there - it's out of bounds!\n" << std::endl;
                continue;
            }
            playSpace[5][5] = moveUP(playSpace, xPosition, yPosition);  
        }

        else if(input.compare("Down") == 0){
            if(yPosition + 1 < 0){
                std::cout << "You can't move there - it's out of bounds!\n" << std::endl;
                continue;
            }
            playSpace[5][5] = moveDOWN(playSpace, xPosition, yPosition);
        }

        else if(input.compare("Left") == 0){
            if(xPosition - 1 < 0){
                std::cout << "You can't move there - it's out of bounds!\n" << std::endl;
                continue;
            }
            playSpace[5][5] = moveLEFT(playSpace, xPosition, yPosition);
        }

        else if(input.compare("Right") == 0){
            if(xPosition + 1 < 0){
                std::cout << "You can't move there - it's out of bounds!\n" << std::endl;
                continue;
            }
            playSpace[5][5] = moveRIGHT(playSpace, xPosition, yPosition);
        }

        std::cout << "\n";
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(playSpace[i][j] == 'W'){
                    tempWin = true;
                }
                if(playSpace[i][j] == 'O'){
                    wallTest = true;
                    xPosition = j;
                    yPosition = i;
                }
            }
        }

        if(tempWin == false){
            std::cout << "You win!" << std::endl;
            winTest = false;
            break;
        }

        else if(wallTest == false){
            std::cout << "You hit a wall - Game Over!" << std::endl;
            winTest = false;
            break;
        }
    }
    system("pause");
}