#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include "AudioCD.h"

int main(){
    int arrLength, inputReleaseYear;
    std::string inputCDTitle, inputGenre, loopInput, targetValue, compareValue;
    float inputCondition;
    bool loopvariable = true;
    int menuSelection, arraySelection, foundIndex;
    bool found;
    int foundAt[25] = {-1};
    int foundcount = 0;
    


    std::cout << "How many CDs do you have lying around your car? ";
    std::cin  >> arrLength;
    AudioCD arrCD[arrLength];
    
    
    for(int i = 0; i < arrLength; i++){
        arrCD[i] = AudioCD(i);
        //printf("debug1");
    }

    while(loopvariable == true){
        std::cout << "[Main Menu]" << "\n1) Album Info\n2)Find a CD\n3)Find an artist\n4)Log Off\nChoice: ";
        std::cin  >> menuSelection;
        std::cout << std::endl;


        if(menuSelection == 1){

            std::cout << "Which CD do you want? ";
            std::cin  >> arraySelection;

            if(arraySelection < 0 || arrLength < arraySelection){
                std::cout << "Sorry, there's no CD that matches the criteria." << std::endl;
                break;
            }
            std::cout << arraySelection << ". ";
            arrCD[arraySelection].toString();
        }

        if(menuSelection == 2){
            std::cout << "What is the CD's name? ";
            std::cin  >> targetValue;
            found = false;

            for(int i = 0; i < 4; i++){
                compareValue = arrCD[i].getTitle();
                if(strcasecmp(compareValue.c_str(),targetValue.c_str()) == 0){
                    found = true;
                    foundIndex = i;
                }
            }

            if(found == true){
                std::cout << "There is a match!" << "\n" << foundIndex << ". ";
                arrCD[foundIndex].toString();
            }
            else if(found == false){
                std::cout << "Sorry, there's no CD that matches the criteria." << std::endl;
            }
        }
        
        if(menuSelection == 3){
            std::cout << "What artist are you looking for? ";
            std::cin  >> targetValue;
            found = false;

            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    compareValue = arrCD[i].getArtist(j);
                    //compareValue = *compareArray[i];
                    //printf("debug 1");
                    std::cout << compareValue;
                    //system("pause");
                    if(strcmpi(compareValue.c_str(),targetValue.c_str()) == 0){
                        //printf("debug 2");
                        found = true;
                        foundAt[foundcount] = i;
                        foundcount++;
                    }
                }
            }

            if(found == true){
                std::cout << foundcount + 1 << " CD(s) found!" << std::endl;
                for(int i = 0; i < 25; i++){
                    if(foundAt[i] == -1){
                        i = 26;
                    }
                    std::cout << "CD: ";
                    arrCD[foundAt[i]].getTitle();
                }
            }
            else if(found == false){
                std::cout << "Sorry, there's no CD that matches the criteria." << std::endl;
            }
        }

        if(menuSelection == 4){
            std::cout << "Goodbye!";
            loopvariable = false;
        }

    }

    //printf("debug2");
    //std::cin >>*/ 
    system("pause");
    return 0;
}

/*
if(strcasecmp(loopAgain.c_str(),compare.c_str()) == 0);
for(int i = 0; i < 4; i++){
    if(newArtists[i].compare("-1") == 0){
        std::string newArr[1+i];
        for(int j = i; j < arrLength; j++){
            newArtists[j] = "-1";
        }
    }
}*/