#include <cstring>
#include <iostream>
#include <string>

int main(){
    bool loopVariable = true;
    std::string loopAgain, compare = "YES";
    int choice;
    while(loopVariable == true){
        std::cout << "Menu\n0 - Hello World\n1 - Goodbye Moon\n2 - Walking on Sunshine\n\nWhat would you like to do : ";
        std::cin  >> choice;
        switch(choice){
            case 0:
                std::cout << "Hello!";
                break;
            
            case 1:
                std::cout << "Ok, bye.";
                break;

            case 2:
                std::cout << "WHOA!";
                break;
        }
        std::cout << "\n\nType YES to rerun. ";
        std::cin  >> loopAgain;
        if(strcasecmp(loopAgain.c_str(),compare.c_str()) == 0){
            loopVariable = true;
        }
        else{
            loopVariable = false;
        }
    }
    std::cout << "Program Ends" << std::endl;
    return 0;
}