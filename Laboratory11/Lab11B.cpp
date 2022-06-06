#include <string>
#include <cstring>
#include <iostream>

int main(){
    bool uppercase = false;
    bool digit     = false;
    bool length    = false;
    std::string pwd;
    std::cout << "Enter a password: ";
    std::cin  >> pwd;
    if(pwd.length() >= 8){
        length = true;
    }
    for(int i = 0; i <pwd.length(); i++){
        if (isupper(pwd[i])){
            uppercase = true;
        }
        if(isdigit(pwd[i])){
            digit = true;
        }
        
    }
    if((uppercase == true) && (digit == true) && (length == true)){
        std::cout << "Valid password" << std::endl;
    }
    else{
        std::cout << "Invalid password" << std::endl;
    }
    std::cout << "\nProgram Ends" << std::endl;
    return 0;
}