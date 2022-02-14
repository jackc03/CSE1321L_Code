#include <iostream>
#include <string>

int main(){
    char answer1, answer2;
    std::cout << "Do you have a driving permit (Y/N)? ";
    std::cin  >> answer1;
    if(answer1 == 'Y' || answer1 == 'y'){
        std::cout << "Do you have a commercial driving license (Y/N)? ";
        std::cin  >> answer2;
        if(answer2 == 'Y'|| answer2 == 'y'){
            std::cout << "Congratulations! You can purchase a vehicle, let’s start talking options!" << std::endl;
            return 0;
        }
        else if(answer2 == 'N'|| answer2 == 'n'){
            std::cout << "Commercial driving license is a prerequisite to purchase a vehicle!" << std::endl;
            return 0;
        }
    }
    else if(answer1 == 'N'|| answer1 == 'n'){
        std::cout << "Driving permit is a prerequisite to purchase a vehicle!" << std::endl;
        return 0;
    }
}