#include<iostream>
using namespace std;

main()
{
    cout.width(10);             // 最小フィール幅をセット
    cout << "Hello" << "\n";  // デフォルトで右揃え
    
    cout.fill('%');             // フィルキャラクタをセット
    cout.width(10);             // 幅をセット
    cout << "Hello" << "\n";  // デフォルトで右揃え
    cout.setf(ios::left);       // 左揃え
    cout.width(10);             // 幅をセット
    cout << "Hello" << "\n";  // 左揃えを出力

    cout.width(10);             // 幅をセット
    cout << 123.234567 << "\n"; // デフォルトを使う
    cout.width(10);             // 幅をセット
    cout.precision(3);          // 精度をセット
    cout << 123.234567 << "\n"; // 3桁の精度

    return 0;
}