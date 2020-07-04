#include<iostream>
using namespace std;

main()
{
    cout.width(10);             // 最小フィール幅をセット
    cout << 1000.5364 << "\n";  // デフォルトで右揃え
    
    cout.fill('*');             // フィルキャラクタをセット
    cout.width(20);             // 幅をセット
    cout << 1000.5364 << "\n";  // デフォルトで右揃え
    cout.setf(ios::left);       // 左揃え
    cout.width(20);             // 幅をセット
    cout << 1000.5364 << "\n";  // 左揃えを出力

    cout.width(20);             // 幅をセット
    cout.precision(3);          // 精度をセット
    cout << 1000.5364 << "\n"; // 3桁の精度

    return 0;
}