#include <iostream>

void FuncC(){
    std::cout << "Starting Function C" << std::endl;
    throw 100;
    std::cout << "Ending Function C" << std::endl; 
}

void FuncB(){
    std::cout << "Starting Function B" << std::endl;
    try {
        FuncC();
    }
    catch (int &ex){
        std::cout << "Cautch error in Function B" << std::endl;
    }
    std::cout << "Ending Function B" << std::endl; 
}

void FuncA(){
    std::cout << "Starting Function A" << std::endl;
    FuncB();
    std::cout << "Ending Function A" << std::endl; 
}

int main() {
    std::cout << "Starting mian" << std::endl;
    try {
        FuncA();
    }
    catch (int &ex){
        std::cout << "Cautch error in main" << std::endl;
    }

    std::cout << "Ending mian" << std::endl; 
    return 0;
}