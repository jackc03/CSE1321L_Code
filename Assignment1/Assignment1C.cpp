#include <iostream>

int main(){
    std::string firstName, lastName, number, netID;
    std::cout << "[KSU NetID Generator]\nEnter the first letter of your first name: ";
    std::cin  >> firstName;
    std::cout << "Enter you last name: ";
    std::cin  >> lastName;
    std::cout << "Enter a valid whole number: ";
    std::cin  >> number;
    netID = firstName + lastName + number;
    std::string email = netID + "@student.kennesaw.edu";
    std::cout  << "Your KSU NetID is " << netID << ". You can log into KSU computers with this NetID as your username and your email password as the password. Your email address is " << email << "." << std::endl;
    system("pause");
}