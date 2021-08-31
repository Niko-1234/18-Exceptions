#include <iostream>

int main() {
    int Miles {};
    int Gallons{};
    double MilesPerGallon {};

    std::cout << "Enter the miles: ";
    std::cin >> Miles;
    std::cout << "Enter the gallons: ";
    std::cin >> Gallons;

    // if (Gallons != 0){
    //     MilesPerGallon = static_cast<double> (Miles)/Gallons;
    //     std::cout << "Result: " << MilesPerGallon << std::endl;
    // } else {
    //     std::cerr << "Sorry, can't divide by zero" << std::endl; 
    // }

    try {
        if (Gallons == 0)
            throw 0;
        MilesPerGallon = static_cast<double> (Miles)/Gallons;
        std::cout << "Result: " << MilesPerGallon << std::endl;
    } 
    catch(int &ex){
        std::cerr << "Sorry, can't divide by zero" << std::endl; 
    }

    std::cout << "Bye" << std::endl;
    return 0;
}