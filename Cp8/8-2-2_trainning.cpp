#include<iostream>
using namespace std;

main()
{
    cout.setf(ios_base::uppercase | ios_base::showbase | ios_base::hex);
    cout << 88 << '\n';

    cout.unsetf(ios_base::uppercase);
    cout << 88 << '\n';

    return 0;
}