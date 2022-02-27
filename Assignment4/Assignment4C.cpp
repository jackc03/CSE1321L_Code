#include <iostream> 
#include <stdlib.h>                                                             
#include <stdio.h>
#include <time.h>                                                        
                                                                                
int main(){
    srand(time(NULL));
    int num1, num2, answer, useranswer, gameMode, numOfQuestions, wrongCounter;
    wrongCounter = 0;
    std::cout << "[Mathletes Game]\nChoose a game mode  (0=Easy, 1=Hard) : ";
    std::cin  >> gameMode;
    if(gameMode == 0){
        numOfQuestions = 5;
        std::cout << "Playing on easy mode, huh? Okay!" << std::endl;
    }
    else if(gameMode == 1){
        numOfQuestions = 10;
        std::cout << "So, you want a challenge? Okay!" << std::endl;
    }
    for(int i = 1; i <= numOfQuestions; i++){
        num1 = rand() % 511 - 255;
        num2 = rand() % 511 - 255;
        answer = num1*num2;
        std::cout << "Q" << i << ". " << num1 << " * " << num2 << " = ?" << std::endl;
        std::cin  >>  useranswer;
        if(gameMode == 0 && useranswer != answer && wrongCounter == 2){
            std::cout << "Incorrect!" << std::endl;
            wrongCounter++;
        }
         else if(useranswer == answer){
            std::cout << "Correct!" << std::endl;
        }
        else if(gameMode == 0 && useranswer != answer && (wrongCounter == 0 || wrongCounter == 1)){
            wrongCounter++;
            std::cout << "Incorrect! Try again." << std::endl;
            continue;
        }
        else if(gameMode = 1 && useranswer != answer){
            std::cout << "Incorrect!\nGame over..." << std::endl;
            break;
        }
        if(wrongCounter == 3){
            std::cout << "Game over..." << std::endl;
            break;
        }
    }
    printf("You win!");
   system("pause");                                                                        
}