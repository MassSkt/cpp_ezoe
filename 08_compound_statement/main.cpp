#include <iostream>
#include "all.h"

int main()
{
    // compoud sample
    // 複合文開始
    {
        std::cout << "hello\n"s ;
        std::cout << "hello\n"s ;
    } // 複合文終了

    // 別の複合文
    { std::cout << "world\n"s ; }

    // 空の複合文
    { }

    // block-scope
    auto x = 0;
    {
        auto x = 1;
        {
            auto x = 2;
            std::cout << x << "\n"s;
        }
        std::cout << x << "\n"s; // is not  2
        x = 42;
        std::cout << x << "\n"s; // will be 42
    }
    std::cout << x << "\n"s;

}