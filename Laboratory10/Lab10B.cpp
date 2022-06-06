#include <iostream>
#include <cmath>

bool isValid(double width, double height){
    bool valid = false;
    if(width+height > 30){
        valid = true;
    }
    return valid;
}

double Area(double width, double height){
    double area = 0;
    area = width * height;
    return area;
}

double Perimeter(double width, double height){
    double perimeter = 0;
    perimeter = 2 * width + 2 * height;
    return perimeter;
}

int main(){
    bool loopVariable = true;
    bool valid;
    double width, height, area, perimeter;
    char response;
    while(loopVariable == true){
        std::cout << "Enter width: ";
        std::cin  >> width;
        std::cout << "Enter height: ";
        std::cin  >> height;
        isValid(width,height);
        Area(width, height);
        Perimeter(width, height);
        if(valid == true){
            std::cout << "The area is: " << area << std::endl;
            std::cout << "The perimeter is: " << perimeter << std::endl;
        }
        else if(valid == false){
            std::cout << "This is an invalid rectangle" << std::endl;
        }
        std::cout << "\nDo you want to enter another width and height (Y/N)? : ";
        std::cin  >> response;
        std::cout << "\n" << std::endl;
        if(response == 'Y' || response == 'y'){
            continue;
        }
        else if(response == 'N' || response == 'n'){
            std::cout << "Program ends";
            loopVariable = false;
        }
    }
    system("pause");
}