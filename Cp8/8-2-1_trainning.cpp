#include<iostream>
using namespace std;

main()
{
    // デフォルト設定で表示
    cout << 123.23 << " Hello " << 100 << "\n";
    cout << 10 << ' ' << 10 << "\n";
    cout << 100.0 << '\n';

    // ここで書式を変更
    cout.setf(ios::hex | ios::scientific);
    cout << 123.23 << " Hello " << 100 << "\n";

    cout.setf(ios::showpos);
    cout << 10 << ' ' << 10 << "\n";

    cout.setf(ios::showpoint | ios::fixed);
    cout << 100.0 << '\n';

    return 0;
}