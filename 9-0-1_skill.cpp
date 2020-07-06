#include<iostream>
using namespace std;

main()
{

    cout.fill(':');                 // フィルキャラクタをセット
    cout.width(40);                 // 幅をセット
    cout << "C++ is fun" << "\n";   // デフォルトで右揃え

    return 0;
}