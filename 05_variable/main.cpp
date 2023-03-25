#include <iostream>
#include "all.h"
// helloと改行を出力するプログラム
int main()
{
    // 整数の変数
    auto answer = 42 ;
    std::cout << answer << "\n"s ;
    // 再代入
    answer = 52;
    std::cout << answer << "\n"s;
    // 浮動小数点数の変数
    auto pi = 3.14 ;
    std::cout << pi << "\n"s ;

    // 文字列の変数
    auto question = "Life, The Universe, and Everything.\n"s ;
    std::cout << question ;

    int i = 123;
    double d = 1.23;
    std::cout << i << "\n"s << d << "\n"s;
}