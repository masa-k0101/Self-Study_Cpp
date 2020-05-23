#include<iostream>

namespace A
{
    // min()を3通りでオーバーロード
    //　整数
    inline int min(int a, int b)
    {
        return a<b ? a : b;
    }

    //　倍長型整数
    inline long min(long a, long b)
    {
        return a<b ? a : b;
    }

    //　浮動小数点
    inline double min(double a, double b)
    {
        return a<b ? a : b;
    }
}

main()
{
    std::cout << A::min(-10, 10) << "\n";
    std::cout << A::min(-10.01, 100.02) << "\n";
    std::cout << A::min(-10L, 12L) << "\n";
    return 0;
}