   #include <iostream>

int main(){
    double tax, meal_price, sub_total, delivery_fee, tip_10, tip_20, total_10, total_20;
    std::cout << "[Tip Calculator]" << std::endl;
    std::cout << "Enter the total price of the meal: ";
    std::cin  >> meal_price;


    std::cout << "Enter the local tax rate: ";
    std::cin  >> tax;


    tax = tax / 100;
    tax = tax * meal_price;


    std::cout << "Enter the delivery fee: ";
    std::cin  >> delivery_fee;


    tip_10 = meal_price * .10;
    tip_20 = meal_price * .20;
    sub_total = meal_price + tax + delivery_fee;
    total_10 = sub_total + tip_10;
    total_20 = sub_total + tip_20;


    std::cout << "\n\nA 10% tip would be $" << tip_10 << "\n" << "The total would be $" << total_10;
    std::cout << "\n\nA 20% tip would be $" << tip_20 << "\n" << "The total would be $" << total_20 << "\n";
    system("pause");

    
}