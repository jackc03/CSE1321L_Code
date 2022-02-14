#include <iostream>
#include <string>

int main(){
    std::string device, nfc, bluetooth;
    double version;
    std::cout << "[App Checklist]\nWhat mobile device do you have? ";
    std::cin  >> device;
    if(device == "Apple"){
        std::cout << "What version do you have? ";
        std::cin  >> version;
        std::cout << "Does your device support NFC? ";
        std::cin  >> nfc;
        if(version >= 14 || nfc == "Yes"){
            std::cout << "Congratulations, you can run the app!" << std::endl;
        }
        else{
            std::cout << "I'm sorry, our app does not support your device." << std::endl;
        }
    }
    else if(device == "Android"){
        std::cout << "What version do you have? ";
        std::cin  >> version;
        std::cout << "Does your device support Bluetooth connections? ";
        std::cin  >> bluetooth;
        if(version >= 10 || bluetooth == "Yes"){
            std::cout << "Congratulations, you can run the app!" << std::endl;
        }
        else{
            std::cout << "I'm sorry, our app does not support your device." << std::endl;
        }
    }
    else if(device == "Blackberry"){
        std::cout << "I'm sorry." << std::endl;
    }
    else{
        std::cout << "I'm sorry, our app does not support your device." << std::endl;
    }
    return 0;
}