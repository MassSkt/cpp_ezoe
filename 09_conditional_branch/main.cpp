#include <iostream>
#include "all.h"

int main()
{

    // value
    auto x = 12345 + 6789 ;
    auto y = 8073 * 132 / 5 ;


    if ( x < y )
    {
        // yが大きい
        std::cout << y ;
    }
    else
    {
        // xが大きい
        std::cout << x ;
    }

    // string
    auto a = "dog"s ;
    auto b = "dog"s ;
    auto c = "cat"s ;

    if ( a == b )
    {
        std::cout << "a == b\n"s ;
    }
    else
    {
        std::cout << "a != b\n" ;
    }

    if ( a == c )
    {
        std::cout << "a == c\n" ;
    }
    else
    {
        std::cout << "a != c\n" ;
    }
}