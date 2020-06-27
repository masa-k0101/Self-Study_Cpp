#include<iostream>
using namespace std;

main()
{
    long f;

    f = cout.flags();   // store flags

    cout.setf(ios::showbase | ios::hex);
    cout << 100 << "\n";

    cout.flags(f);
    
    return 0;
}