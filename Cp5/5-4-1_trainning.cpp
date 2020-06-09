// このプログラムはあいまいさのエラーがある
#include<iostream>

namespace A
{
    float f(float i)
    {
        return i / 2.0;
    }

    double f(double i)
    {
        return i / 3.0;
    }
}

main()
{
    float x = 10.09;
    double y = 10.09;

    std::cout << A::f(x);      // f(float)を使えば、あいまいではない
    std::cout << A::f(y);      // f(double)を使えば、あいまいではない

    std::cout << A::f(10);     // 10をdoubel、floatどちらに変換するか？

    return 0;
}