#include <iostream>
#include <string>

int main(){
    std::string day;
    std::cout << "Enter the day: ";
    std::cin  >> day;
    if((day == "Monday") || (day == "monday") || (day == "Wednesday") || (day == "wednesday")){
        std::cout << "I have class today!" << std::endl;
    }
    else if((day == "Friday") || (day == "friday")){
        std::cout << "It's Friday! Friday! Gotta get down on Friday!" << std::endl;
    }
    else{
        std::cout << "I should use this time to do my homework." << std::endl;
    }
}