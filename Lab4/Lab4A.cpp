#include <iostream>

int main(){
    float grade;
    std::cout << "Enter the score of your exam: ";
    std::cin  >> grade;
    std::cout << "Letter grade is: ";
    if(grade > 97 && grade <= 100){
       std::cout << "A+"; 
    }

    else if(grade > 94 && grade <= 97){
       std::cout << "A"; 
    }
    else if(grade > 91 && grade <= 94){
       std::cout << "A-"; 
    }
    else if(grade > 88 && grade <= 91){
       std::cout << "B+"; 
    }
    else if(grade > 85 && grade <= 88){
       std::cout << "B"; 
    }
    else if(grade > 82 && grade <= 85){
       std::cout << "B-"; 
    }
    else if(grade > 79 && grade <= 82){
       std::cout << "C+"; 
    }
    else if(grade > 76 && grade <= 79){
       std::cout << "C"; 
    }
    else if(grade > 73 && grade <= 76){
       std::cout << "C-"; 
    }
    else if(grade > 70 && grade <= 73){
       std::cout << "D+"; 
    }
    else if(grade > 67 && grade <= 70){
       std::cout << "D"; 
    }
    else if(grade > 64 && grade <= 67){
       std::cout << "D-"; 
    }
    else if(grade < 64){
       std::cout << "F"; 
    }
    system("pause");
}