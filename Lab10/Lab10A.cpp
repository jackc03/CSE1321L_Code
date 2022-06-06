#include <iostream>
#include <cmath>

int max(int x, int y){
    int max;
    if(x > y){
        max = x;
    }
    if(x < y){
        max = y;
    }
    return max;
}

int min(int x, int y){
    int min;
    if(x < y){
        min = x;
    }
    if(x > y){
        min = y;
    }
    return min;
}

double average(int x, int y){
    double average = ((double)x+(double)y) / 2;
    return average;
}

int main(){
    int num1,num2, minimum, maximum;
    double avg;
    std::cout << "Enter number 1:";
    std::cin  >> num1;
    std::cout << "Enter number 2:";
    std::cin  >> num2;
    minimum = min(num1,num2);
    maximum = max(num1,num2);
    avg = average(num1, num2);
    std::cout << "Min is " << minimum << std::endl;
    std::cout << "Max is " << maximum << std::endl;
    std::cout << "Average is " << avg << std::endl;
    system("pause");
}
