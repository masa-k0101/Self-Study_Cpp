// 自然対数と10を底とする対数の一覧表を作る
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

main()
{
    float x;

    cout << setprecision(5);
    cout << "      x        log10(x)      loge(x)\n\n";
    
    for(x=2.0; x<=100; x++)
    {
        cout << setw(10);
        cout << x << "  ";
        cout << setw(10);
        cout << log10(x) << "  ";
        cout << setw(10);
        cout << log(x) << "\n";
    }

    return 0;
}