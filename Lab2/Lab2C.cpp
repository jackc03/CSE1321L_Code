#include <iostream>
#include <cmath>

int main(){
    double width;
    double height;
    double area;
    double perimeter;
    std::cout << "Enter a width: ";
    std::cin  >> width;
    std::cout << "Enter a height: ";
    std::cin  >> height;
    area = width * height;
    perimeter = 2 * width + 2* height;
    std::cout << "The area is " << area << "\nThe perimeter is " << perimeter;
}