#include <iostream>
#include <cmath>

int main(){
    int i = 0;
    double courseCH[4], courseGrade[4], QP, TotalCH, GPA;
    QP = 0;
    TotalCH = 0;
    for(i = 0; i < 4; i++){
        std::cout << "Course " << i+1 << " hours: ";
        std::cin  >> courseCH[i];
        std::cout << "Grade for course " << i+1 <<": ";
        std::cin  >> courseGrade[i];
        QP += (courseCH[i] * courseGrade[i]);
        TotalCH += courseCH[i];
    }

    GPA = QP / TotalCH;
    std::cout << "Total hours is: " << TotalCH << std::endl;
    std::cout << "Total quality points is: " << QP << std::endl;
    std::cout << "Your GPA for this semester is " << GPA << std::endl;
}