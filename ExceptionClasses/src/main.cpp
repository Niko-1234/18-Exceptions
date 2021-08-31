#include <iostream>

class DivideByZeroException {
};

class NegativeValueException {
};

double CalcMPG(int Miles, int Gallons){
    if (Gallons == 0)
        throw DivideByZeroException();
    if (Miles < 0 || Gallons < 0)
        throw NegativeValueException();
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
    catch(const DivideByZeroException &ex){
       std::cerr <<"Try divide by zero!" << std::endl; 
    }
    catch (const NegativeValueException &ex){
        std::cerr <<"One of params is negative!" << std::endl; 
    }
    
    std::cout << "Bye" << std::endl;
    return 0;
}