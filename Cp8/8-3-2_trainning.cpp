// 平方根と平方の一覧表を作る
#include<iostream>
#include<math.h>
using namespace std;

main()
{
    double x;

    cout.precision(4);
    cout << "      x    sqrt(x)    x^2\n\n";
    
    for(x=2.0; x<=20.0; x++)
    {
        cout.width(7);
        cout << x << "  ";
        cout.width(7);
        cout << sqrt(x) << "  ";
        cout.width(7);
        cout << x*x << "\n";
    }

    return 0;
}