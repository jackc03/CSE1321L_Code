#include <iostream>

int main(){
    char rerun;
    float balance, deposit, withdrawal;
    int choice;
    balance = 1000;
    std::cout << "Welcome!\nYou have $1000 in your account\n" << std::endl;
    rerun == 'Y';
    do{
        std::cout << "Menu\n0 - Make a deposit\n1 - Make a withdrawal\n2 - Display account value\n\nPlease make a selection: ";
        std::cin  >> choice;
        switch(choice){
            case 0:
                std::cout << "How much would you like to deposit? : ";
                std::cin  >> deposit;
                balance += deposit;
                std::cout << "Your current balance is $" << balance << std::endl;
                std::cout << "Would you like to return to the main menu (Y/N)? : ";
                std::cin  >> rerun;
                break;

            case 1:
                std::cout << "How much would you like to withdraw? : ";
                std::cin  >> withdrawal;
                balance -= withdrawal;
                std::cout << "Your current balance is $" << balance << std::endl;
                std::cout << "Would you like to return to the main menu (Y/N)? : ";
                std::cin  >> rerun;
                break;

            case 2:
                std::cout << "Your current balance is $" << balance << std::endl;
                std::cout << "Would you like to return to the main menu (Y/N)? : ";
                std::cin  >> rerun;
                break;

            default:
                std::cout << "Invalid entry, please try again.";
                std::cout << "Would you like to return to the main menu (Y/N)? : ";
                std::cin  >> rerun;
                break;
 
        }
    }
    while(rerun == 'Y' || rerun == 'y');
    std::cout << "Thank you for banking with us!" << std::endl;
    return 0;
}