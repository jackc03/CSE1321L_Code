#include <iostream>
#include <math.h>

int main(){
    double PentSide, PentPeri, PentArea, HexSide, HexPeri, HexArea;
    std::cout << "[Pentagon Calculator]\nEnter the length of one side: ";
    std::cin  >> PentSide;
    PentPeri = 5 * PentSide;
    PentArea = 1.72048 * pow(PentSide,2);
    std::cout << "Pentagon Perimeter = " << PentPeri << "\nPentagon Area = " << PentArea << std::endl;
    std::cout << "\n[Hexagon Calculator]\nEnter the length of one side: ";
    std::cin  >> HexSide;
    HexPeri = 6 * HexSide;
    HexArea = 2.59808 * pow(HexSide,2);
    std::cout << "Hexagon Perimeter = " << HexPeri << "\nHexagon Area = " << HexArea << std::endl;
}