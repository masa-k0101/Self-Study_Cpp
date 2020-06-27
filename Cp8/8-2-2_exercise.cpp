#include<iostream>
using namespace std;

main()
{
    // ここで書式を変更
    cout.setf(ios_base::showpoint | ios::uppercase | ios::scientific);
    cout << 100.0;

    return 0;
}