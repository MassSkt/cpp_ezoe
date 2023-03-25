#include <iostream>
#include "all.h"

int main(){
    // calculate bmi from std in
    double height{};
    double weight{};

    std::cout << "Enter your height in meters: "s;
    std::cin >> height;
    std::cout << "Enter your weight in kilograms: "s;
    std::cin >> weight;

    double bmi = weight / (height * height);
    std::cout << "Your BMI is: "s << bmi << "\n"s;
}

// main.exe << bodymass.txt
// convert.exe << bodymass_cm.txt | main.exe