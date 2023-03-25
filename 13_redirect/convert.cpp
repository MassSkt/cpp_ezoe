#include <iostream>
#include "all.h"
int main(){
    // convert std input units from cm to m
    double height{};
    double weight{};

    // std::cout << "Enter your height in cm: "s;
    std::cin >> height;
    // std::cout << "Enter your weight: "s;
    std::cin >> weight;

    std::cout << height / 100 << "\n"s << weight;
}