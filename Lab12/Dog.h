#ifndef Dog_h
#define Dog_h
#include <iostream>

class Dog{
    public:
        int age;
        double weight;
        std::string name;
        std::string furColor;
        std::string breed;

        Dog(int age, double weight, std::string name, std::string furColor, std::string breed);
        void bark();
        std::string rename(std::string newName);
        double eat(double food);
};
#endif
