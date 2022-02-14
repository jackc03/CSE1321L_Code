#include <iostream>
#include <math.h>

int main(){
    double eventNum, attendance;
    std::cout << "[Scrappy's Bucket List Rewards]\nHow many events have you attended? ";
    std::cin  >> eventNum;
    attendance = (100 *eventNum)/63;
    if(attendance >= 10){
        std::cout << "You've been to " << attendance << "% of all SBL events!" << std::endl;
        std::cout << "You've earned a Drawstring Bag!" << std::endl;
        if(attendance >= 25){
            std::cout << "You've earned a Hat!" << std::endl;
            if(attendance >=50){
            std::cout << "You've earned a T-Shirt!" << std::endl;
                if(attendance >=75){
                    std::cout << "You've earned a Glass Water Bottle!" << std::endl;
                    if(attendance == 100){
                        std::cout << "You've earned a Hoodie!\nAre you graduating?" << std::endl;
                        std::string answer;
                        std::cin  >> answer;
                        if(answer == "Yes"){
                            std::cout << "You've earned a Challenge Coin and special Graduation Cords!" << std::endl;
                        }
                        else if(answer == "No"){
                            std::cout << "There's a special reward when you graduate!" << std::endl;
                        }
                    }

                }
                
            }
        }
    }
    else if (attendance < 10 && attendance != 0){
        std::cout << "You've been to " << attendance << "% of all SBL events!" << std::endl;
        std::cout <<"Check out events at https://studentaffairs.kennesaw.edu/scrappysbucketlist/!" << std::endl;
    }
    else if(attendance = 0){
        std::cout <<"Check out events at https://studentaffairs.kennesaw.edu/scrappysbucketlist/!" << std::endl;
    }
    return 0;
}