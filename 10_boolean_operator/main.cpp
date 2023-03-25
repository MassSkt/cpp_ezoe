#include <iostream>
#include "all.h"


bool is_rocket_ready_to_launch()
{
    return false;
}


int main()
{

    // std::cout << std::boolalpha;
    // std::cout << !true << "\n"s;

    auto print = [](auto out)
    {
        std::cout << out << "\n"s;
    };

    if (!is_rocket_ready_to_launch())
    {
        std::cout << "Standby..\n"s;
    }

    print(true == true);
    print(true != false);
    print(true && false);
    print(true || false);

    double temperature = 36.6;
    if ((temperature >= 36) && (temperature <= 37))
    {
        std::cout << "Good\n"s;
    }
    else
    {
        std::cout << "Bad\n"s;
    }

}