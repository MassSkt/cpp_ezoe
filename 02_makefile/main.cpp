#include "all.h"

int main()
{
    std::cout << "hello";
}

// g++ -include all.h -o program main.cpp

// When header is precompiled, compile is done faster.
// g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h
//  g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program main.cpp

