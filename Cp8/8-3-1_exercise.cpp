// 自然対数と10を底とする対数の一覧表を作る
#include<iostream>
#include<math.h>
using namespace std;

main()
{
    float x;

    cout.precision(5);
    cout << "      x        log10(x)      loge(x)\n\n";
    
    for(x=2.0; x<=100; x++)
    {
        cout.width(10);
        cout << x << "  ";
        cout.width(10);
        cout << log10(x) << "  ";
        cout.width(10);
        cout << log(x) << "\n";
    }

    return 0;
}