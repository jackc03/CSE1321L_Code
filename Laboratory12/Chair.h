#ifndef _CHAIR_H_
#define _CHAIR_H_

#include <iostream>
class Chair{
    public:
        int numOfLegs;
        bool rolling;
        std::string material;
        
    Chair(int legNum, bool Wheels, std::string material);
};
#endif