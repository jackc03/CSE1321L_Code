#include <iostream>

int main(){
    int width, height;
    bool color = true;
    bool previousRow = true;
    std::cout << "Enter the checkerboard's width: ";
    std::cin >> width;
    std::cout << "Enter the checkerboard's height: ";
    std::cin >> height;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= width; j++){
            if(previousRow == true && j == 1 && i != 1){
                std::cout << "□";
                previousRow = false;
                color = true;
            }
            else if(previousRow == false && j == 1 && i != 1){
                std::cout << "■";
                previousRow = true;
                color = false;
            }
            else{
                if(color == true){
                    std::cout << "■";
                    color = false;
                }
                else if(color == false){
                    std::cout << "□";
                    color = true; 
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}