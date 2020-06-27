#include<iostream>
using namespace std;

main()
{
    // デフォルト設定で表示
    cout << 10 << ' ' << -10 << "\n";

    // ここで書式を変更
    cout.setf(ios_base::showpos);
    cout << 10 << ' ' << -10 << "\n";

    return 0;
}