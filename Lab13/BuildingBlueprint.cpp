#include <iostream>
#include "BuildingBlueprint.h"

BuildingBlueprint::BuildingBlueprint(){
    stories = 10;
    aptNum  = 20;
    occupancyRate = 1.0;
    fullyOccupied = true;
}

BuildingBlueprint::BuildingBlueprint(int s, int a, float o) 
: stories(s), aptNum(a), occupancyRate(o) 
{
    if(occupancyRate == 1.0f){
        fullyOccupied = true;
    }
    else{
        fullyOccupied = false;
    }
}


float BuildingBlueprint::getOccupancy(){
    return occupancyRate;
}

void BuildingBlueprint::setOccupancy(float o){
    occupancyRate = o;
}

int BuildingBlueprint::getStories(){
    return stories;
}

int BuildingBlueprint::getAptNum(){
    return aptNum;
}

bool BuildingBlueprint::getFull(){
    if(occupancyRate == 1.0f){
        fullyOccupied = true;
    }
    else{
        fullyOccupied = false;
    }
    return fullyOccupied;
}
