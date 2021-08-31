#include <iostream>

double CalcMPG(int Miles, int Gallons){
    if (Gallons == 0)
        throw 0;
    return static_cast<double>(Miles)/Gallons;
}

int main() {
    int Miles {};
    int Gallons{};
    double MilesPerGallon {};

    std::cout << "Enter the miles: ";
    std::cin >> Miles;
    std::cout << "Enter the gallons: ";
    std::cin >> Gallons;

    try {
        MilesPerGallon = CalcMPG(Miles, Gallons);
        std::cout << "Result: " << MilesPerGallon << std::endl;
    }
    catch(int &ex){
       std::cout <<"Try divide by zero!" << std::endl; 
    }
    std::cout << "Bye" << std::endl;
    return 0;
}