#include <iostream>
#include "all.h"

bool a(){
    std::cout << "a() called\n"s;
    return false;
}

bool b(){
    std::cout << "b() called\n"s;
    return true;
}

int main()
{

    bool c = a() && b();
    std::cout << c << "\n"s;

}