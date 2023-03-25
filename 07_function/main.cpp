#include <iostream>
#include "all.h"

int plus(int x, int y){
    return x + y;
}

int main()
{
    int x = plus(1,2);
    std::cout << x << "\n";
}