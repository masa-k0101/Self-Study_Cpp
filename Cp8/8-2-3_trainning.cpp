#include<iostream>
using namespace std;

void showflags();

main()
{
    // 書式フラグのデフォルト条件を表示
    showflags();

    cout.setf(ios::oct | ios::showbase | ios::fixed);

    showflags();

    return 0;
}

// この関数は書式フラグのステータス表示
void showflags()
{
    long f, i;
    int j;

    char flgs[15][12] = {
        "skipws",
        "left",
        "right",
        "internal",
        "dec",
        "oct",
        "hex",
        "showbase",
        "showpoint",
        "uppercase",
        "showpos",
        "scientific",
        "fixed",
        "unitbuf",
        "stdio"
    };

    f = cout.flags();   // フラグ設定を得る

    // 各フラグをチェック
    for(i=1, j=0; i<=0x4000; i = i<<1, j++)
        if(i & f)   cout << flgs[j] << " is on\n";
        else        cout << flgs[j] << " is off\n";
    
    cout << "\n";
}