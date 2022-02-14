#include <iostream>

int main(){
    char day, time;
    std::cout << "[Instructor Scheduler}\nWhat day of the week is it?";
    std::cin  >> day;
    switch(day){
        case 'M': 
            std::cout << "What time of day?";
            std::cin  >> time;
            switch(time){
                case 'a':
                    std::cout << "On Monday Morning, you'll be teaching C++, section E04!";
                    break;
                case 'p':
                    std::cout << "On Monday Afternoon, you'll be teaching Java, section J02!";
                    break;
                default:
                    std::cout << "That's not a valid day or time!!";
                    break;
            }
            break;
        case 'T': 
            std::cout << "What time of day?";
            std::cin  >> time;
            switch(time){
                case 'a':
                    std::cout << "On Tuesday Morning, you'll be holding office hours!";
                    break;

                case 'p':
                    std::cout << "On Tuesday Afternon, you'll be teaching C#, section W#1!";
                    break;
                default:
                    std::cout << "That's not a valid day or time!!";
                    break;                
            }
            break;
        case 'W': 
            std::cout << "What time of day?";
            std::cin  >> time;
            switch(time){
                case 'a':
                    std::cout << "On Wednesday Morning, you'll be teaching C#, section #02!";
                    break;

                case 'p':
                    std::cout << "On Wednesday Afternoon, you'll have some free time!";
                    break;
                default:
                    std::cout << "That's not a valid day or time!!";
                    break;
                    
            }
            break;
        case 'R': 
            std::cout << "What time of day?";
            std::cin  >> time;
            switch(time){
                case 'a':
                    std::cout << "On Thursday Morning, you'll be holding office hours!";
                    break;

                case 'p':
                    std::cout << "On Thursday Afternoon, you'll be teaching C++, section WE3!";
                    break;
                default:
                    std::cout << "That's not a valid day or time!!";
                    break;
            }
            break;
        case 'F': 
            std::cout << "What time of day?";
            std::cin  >> time;
            switch(time){
                case 'a':
                    std::cout << "On Friday Morning, you'll be teaching Java, section WJ3!";
                    break;
                case 'p':
                    std::cout << "On Friday Afternoon, you'll have some free time!";
                    break;
                default:
                    std::cout << "That's not a valid day or time!!";
                    break ;
            }
            break;
        default:
            std::cout << "That's not a valid day or time!!";
    }
    system("pause");
}