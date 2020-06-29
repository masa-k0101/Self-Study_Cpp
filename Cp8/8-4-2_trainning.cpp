// このバージョンはI/Oマニュピレータを使って平方と平方根の一覧を表示する
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

main()
{
    double x;

    cout << setprecision(3);
    cout << "      x     sqrt(x)   x^2\n\n";

    for(x=2.0; x<=20.0; x++)
    {
        cout << setw(7) << x << "  ";
        cout << setw(7) << sqrt(x) << "  ";
        cout << setw(7) << x*x << '\n';
    }

    return 0;
}