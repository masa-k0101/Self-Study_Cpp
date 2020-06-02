#include<iostream>
#include<math.h>

namespace A
{
    void round(double &num)
    {
        double frac;
        double val;

        // numを整数部と小数部に分解
        frac = modf(num, &val);
        if(frac < 0.5)      num = val;
        else                num = val+1.0;
    }
}

main()
{
    double i = 10.4;

    std::cout << i << " rounded is ";
    A::round(i);
    std::cout << i << "\n";

    i = 10.9;
    std::cout << i << " rounded is ";
    A::round(i);
    std::cout << i << "\n";

    return 0;
}