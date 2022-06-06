#include <iostream>

char moveUP(char arr[5][5], int xPOS, int yPOS){
    if(yPOS - 1 >= 0){
        if(arr[yPOS-1][xPOS] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS-1][xPOS] == '_'){
            arr[yPOS-1][xPOS] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
        if( arr[yPOS-1][xPOS] == 'W'){
            arr[yPOS][xPOS] = '_';
        }
    }
    return arr[5][5];
}
char moveDOWN(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS+1][xPOS] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS+1][xPOS] == '_'){
            arr[yPOS+1][xPOS] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
        if( arr[yPOS+1][xPOS] == 'W'){
            arr[yPOS][xPOS] = '_';
        }
    }
    return arr[5][5];
}
char moveLEFT(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS][xPOS-1] == 'X'){
            arr[yPOS][xPOS]     = '_';  
        }
        if(arr[yPOS][xPOS-1] == '_'){
            arr[yPOS][xPOS-1] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
        if( arr[yPOS][xPOS-1] == 'W'){
            arr[yPOS][xPOS] = '_';
        }
    }
    return arr[5][5];
}
char moveRIGHT(char arr[5][5], int xPOS, int yPOS){
    if(yPOS + 1 >= 0){
        if(arr[yPOS][xPOS+1] == 'X'){
            arr[yPOS][xPOS]     = '_';
        }
        if(arr[yPOS][xPOS+1] == '_'){
            arr[yPOS][xPOS+1] = 'O';
            arr[yPOS][xPOS]   = '_';
        }
        if( arr[yPOS][xPOS+1] == 'W'){
            arr[yPOS][xPOS] = '_';
        }
    }
    return arr[5][5];
}
bool checkValidPosition(char arr[5][5], int x, int y){
    bool maybeValid =false;
    if ((x >= 0) && (y >= 0) && (x < 5) && (y < 5)){
        maybeValid = true;
    }
    return maybeValid;
}

int checkGameStatus(char arr[5][5], int xPOS, int yPOS){
    int returnStatus;
    std::cout << arr[xPOS][yPOS] << std::endl;
    if(arr[xPOS][yPOS] == 'X'){
        returnStatus = 0;
    }
    else if(arr[xPOS][yPOS] == 'O'){
        returnStatus = 1;
    }
    else if(arr[xPOS][yPOS] == 'W'){
        returnStatus = 2;
    }
    return returnStatus;
}

void printMaze(char arr[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << arr[i][j] << '.';
        }
        std::cout << std::endl;
    }
}


int main(){
    bool tempWin, winTest, wallTest;
    int xPosition, yPosition, runCounter, gameStatus;
    xPosition = 0;
    yPosition = 0;
    char playSpace[5][5] = {{'O','X','_','X','X'},{'_','X','_','X','W'},{'_','_','_','X','_'},{'X','X','_','_','_'},{'_','_','_','X','X'}};
    std::string input;
    winTest = true;
    bool valid;
    std::cout << "[Maze Game]" << std::endl;
    runCounter = 1;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << playSpace[i][j] << '.';
        }
        std::cout << std::endl;
    }

    while(winTest == true){
        if(runCounter !=1){
            printMaze(playSpace);
        }
        std::cout << xPosition << "\t" << yPosition << std::endl;
    

        runCounter++;
        tempWin = false;
        wallTest = false;
        std::cout << "Which direction do you want to move? ";
        std::getline(std::cin, input);

        if(input.compare("Up") == 0){
           
            valid = checkValidPosition(playSpace, xPosition, yPosition-1);
            if(valid == true){
                playSpace[5][5] = moveUP(playSpace, xPosition, yPosition);  
                yPosition -= 1;
                gameStatus = checkGameStatus(playSpace, xPosition, yPosition);
            }
            else if(valid == false){
                std::cout << "You can't move there - it's out of bounds!" << std::endl;
                continue;
            }
        }

        else if(input.compare("Down") == 0){
            valid = checkValidPosition(playSpace, xPosition, yPosition+1);
            if(valid == true){            
                playSpace[5][5] = moveDOWN(playSpace, xPosition, yPosition);
                yPosition += 1;
                gameStatus = checkGameStatus(playSpace, xPosition, yPosition);
            }
            else if(valid == false){
                std::cout << "You can't move there - it's out of bounds!" << std::endl;
                continue;
            }
        }

        else if(input.compare("Left") == 0){
            valid = checkValidPosition(playSpace, xPosition-1, yPosition);
            if(valid == true){
                playSpace[5][5] = moveLEFT(playSpace, xPosition, yPosition);
                xPosition -= 1;
            }
            else if(valid == false){
                std::cout << "You can't move there - it's out of bounds!" << std::endl;
                continue;
            }
        }

        if(input.compare("Right") == 0){
            valid = checkValidPosition(playSpace, xPosition+1, yPosition+1);
            if(valid == true){            

                playSpace[5][5] = moveRIGHT(playSpace, xPosition, yPosition);
                xPosition += 1;
            }
            else if(valid == false){
                std::cout << "You can't move there - it's out of bounds!" << std::endl;
                continue;
            }
        }
        std::cout << xPosition << "\t" << yPosition << std::endl;


        //std::cout << xPosition << yPosition <<  gameStatus << std::endl;

        std::cout << "\n";
        
        /*for(int i = 0; i < 5; i++){
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
        }*/

        if(gameStatus == 2){
            std::cout << "You win!" << std::endl;
            winTest = false;
        }

        else if(gameStatus == 0){
            std::cout << "You hit a wall - Game Over!" << std::endl;
            winTest = false;
        }
    }
    system("pause");
}