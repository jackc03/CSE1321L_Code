#include <iostream>

int main(){
    int x, y;
    std::string location;
    std::cout << "Enter x: ";
    std::cin  >> x;
    std::cout << "Enter y: ";
    std::cin  >> y;
    if(x == 0 && y == 0){
        location = "on the origin.";
    }
    else if(x == 0){
        location = "on the y axis.";
    }
    else if(y == 0){
        location = "on the x axis.";
    }
    else if(x > 0 && y > 0){
        location = "in the first quadrant.";
    }
    else if(x < 0 && y > 0){
        location = "in the second quadrant.";
    }
    else if(x < 0 && y < 0){
        location = "in the third quadrant.";
    }
    else if(x > 0 && y < 0){
        location = "in the fourth quadrant.";
    }
    std::cout << "This point is " << location << std::endl;
    system("pause");
}