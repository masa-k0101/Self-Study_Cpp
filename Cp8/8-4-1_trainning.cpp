// 指定の文字列を画面中央に表示する
#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    cout << hex << 100 << endl;
    cout << oct << 10 << endl;

    cout << setfill('x') << setw(10);
    cout << 100 << " hi " << endl;

    return 0;
}