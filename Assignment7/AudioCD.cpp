#include "AudioCD.h"
#include <algorithm>

AudioCD::AudioCD(){
    cdTitle     = "";
    for(int i = 0; i < 4; i ++){
        artists[i] = "";
    }
    releaseYear = 1980;
    genre       = "";
    condition   = 0.0f;
}

AudioCD::AudioCD(int i){
    std::cout << "CD #" << i + 1 << std::endl;
    bool loopvariable = true;
    std::cout << loopvariable;
    std::string inputArtists[4] = {"-1", "-1", "-1", "-1"};
    std::string loopInput;
    int loopcount = 0;


    std::cout << "*Enter Title: ";
    
    std::cin.ignore(1, '\n');
    std::getline(std::cin, cdTitle); 
    
    std::cout << "*Enter Artists (type stop when finished):\n";
    
    while(loopvariable == true){

        std::getline(std::cin, loopInput);

        if(loopcount < 4){
            inputArtists[loopcount] = loopInput;
        }

        if(loopInput == "-1"){
            //printf("debugging, if statement worked");
            loopvariable = false;
        }
        loopcount++;
    }

    std::cout << "*Enter Genre: ";
    std::cin.ignore(1, '\n');
    std::getline(std::cin, genre);

    std::cout << "*Enter Release Year: ";
    std::cin  >> releaseYear;

    std::cout << "*Enter Condition: ";
    std::cin  >> condition;

    if(condition < 0.0f || 5.0 < condition){
        condition = 0.0f;
    }

    if(releaseYear < 1980){
        releaseYear = 1980;
    }

    if(loopcount > 4){
        std::cout << "Too many elements, will only store first 4" << std::endl;
    }
    for(int i = 0; i < 4; i++){
        artists[i] = inputArtists[i];
    }
}


void AudioCD::toString(){
    std::cout << cdTitle << ", " << releaseYear << std::endl;
    for(int i = 0; i < 4; i++){
        if(artists[i] == "-1"){
            i = 5;
        }
        std::cout << "Artist (#" << i + 1 << "): " << artists[i] << std::endl;
    }
    std::cout << "Genre: " << genre << "\nCondition: " << condition << std::endl;
}
std::string AudioCD::getTitle(){
    return cdTitle;
}
std::string AudioCD::getArtist(int i){
    return artists[i];
}
