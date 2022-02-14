#include <iostream>
#include <string>

void Lab2A(std::string name1,std::string name2,std::string verb,std::string adverb){
    std::cout << "Once upon a time, there was a person named " << name1 << " who had a child named " << name2 << ". This child would " << verb << " " << adverb << " while singing to strangers.\n";
}


int main(){
    std::string name1;
    std::string name2;
    std::string verb;
    std::string adverb;
    std::cout << "Enter a name: ";
    std::cin  >> name1;
    std::cout << "Enter another name: ";
    std::cin  >> name2;
    std::cout << "Enter a verb: ";
    std::cin  >> verb;
    std::cout << "Enter an adverb: ";
    std::cin  >> adverb;
    Lab2A(name1,name2,verb,adverb);
    return 0;
}