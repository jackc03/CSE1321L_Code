#include <iostream>
#include "BuildingBlueprint.h"

int main(){
    BuildingBlueprint b1;
    BuildingBlueprint b2(30, 30, 0.75f);
    std::cout << "Year 2020:" << std::endl;
    int b1Stories = b1.getStories();
    int b1AptNum  = b1.getAptNum();
    bool b1Bool   = b1.getFull();
    float b1_Occupancy = b1.getOccupancy();
    int b2Stories = b2.getStories();
    int b2AptNum  = b2.getAptNum();
    bool b2Bool   = b2.getFull();
    float b2_Occupancy = b2.getOccupancy();
    if(b1Bool == true){
        std::cout << "Building 1 has " << b1Stories << " floors, " << b1AptNum << " apartments and is " << b1_Occupancy * 100 << "\% occupied. Full? true" << std::endl;
    }
    if(b1Bool == false){
        std::cout << "Building 1 has " << b1Stories << " floors, " << b1AptNum << " apartments and is " << b1_Occupancy * 100 << "\% occupied. Full? false" << std::endl;
    }
    if(b2Bool == true){
        std::cout << "Building 2 has " << b2Stories << " floors, " << b2AptNum << " apartments and is " << b2_Occupancy * 100 << "\% occupied. Full? true" << std::endl;
    }
    if(b2Bool == false){
        std::cout << "Building 2 has " << b2Stories << " floors, " << b2AptNum << " apartments and is " << b2_Occupancy * 100 << "\% occupied. Full? false" << std::endl;
    }

    b1.setOccupancy(0.0f);
    b2.setOccupancy(1.0f);


    b1Bool   = b1.getFull();
    b1_Occupancy = b1.getOccupancy();

    b2Bool   = b2.getFull();
    b2_Occupancy = b2.getOccupancy();

    std::cout << "\nMany years pass.\n\nYear 2043:" << std::endl;


    if(b1Bool == true){
        std::cout << "Building 1 has " << b1Stories << " floors, " << b1AptNum << " apartments and is " << b1_Occupancy * 100 << "\% occupied. Full? true" << std::endl;
    }
    if(b1Bool == false){
        std::cout << "Building 1 has " << b1Stories << " floors, " << b1AptNum << " apartments and is " << b1_Occupancy * 100 << "\% occupied. Full? false" << std::endl;
    }
    if(b2Bool == true){
        std::cout << "Building 2 has " << b2Stories << " floors, " << b2AptNum << " apartments and is " << b2_Occupancy * 100 << "\% occupied. Full? true" << std::endl;
    }
    if(b2Bool == false){
        std::cout << "Building 2 has " << b2Stories << " floors, " << b2AptNum << " apartments and is " << b2_Occupancy * 100 << "\% occupied. Full? false" << std::endl;
    }

    std::cout << "\nLooks like people prefer taller buildings." << std::endl;
    system("pause");
    return 0;
}