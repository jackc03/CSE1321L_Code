#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

int main(){
    float x, y, z, w;
    std::string MathMadLib = "x + (y / z) * w = ?";
    std::cout << "[Math Mad Libs]\n";
    std::cout << MathMadLib << "\n";
    std::cout << "Enter the first term: ";
    std::cin  >> x;
    std::string xStr(std::to_string(x));
    std::size_t found = MathMadLib.find_first_of('x');
    MathMadLib.erase(std::remove(MathMadLib.begin() , MathMadLib.end(), 'x'),MathMadLib.end());
    MathMadLib.insert(found,xStr);
    
    std::cout << MathMadLib << "\n";
    std::cout << "Enter the second term: ";
    std::cin  >> y;
    std::string yStr(std::to_string(y));
    found = MathMadLib.find_first_of('y');
    MathMadLib.erase(std::remove(MathMadLib.begin() , MathMadLib.end(), 'y'),MathMadLib.end());
    MathMadLib.insert(found,yStr);
   
    std::cout << MathMadLib << "\n";
    std::cout << "Enter the third term: ";
    std::cin  >> z;
    std::string zStr(std::to_string(z));
    found = MathMadLib.find_first_of('z');
    MathMadLib.erase(std::remove(MathMadLib.begin() , MathMadLib.end(), 'z'),MathMadLib.end());
    MathMadLib.insert(found,zStr);

    std::cout << MathMadLib << "\n";
    std::cout << "Enter the fourth term: ";
    std::cin  >> w;
    std::string wStr(std::to_string(w));
    found = MathMadLib.find_first_of('w');
    MathMadLib.erase(std::remove(MathMadLib.begin() , MathMadLib.end(), 'w'),MathMadLib.end());
    MathMadLib.insert(found,wStr);
    float finalAnswer = x + ( y / z) * w;

    std::string finalAnswerStr(std::to_string(finalAnswer));
    found = MathMadLib.find_first_of('?');
    MathMadLib.erase(std::remove(MathMadLib.begin() , MathMadLib.end(), '?'),MathMadLib.end());
    MathMadLib.append(finalAnswerStr);
    std::cout << MathMadLib << "\n";

    
    system("pause");
}