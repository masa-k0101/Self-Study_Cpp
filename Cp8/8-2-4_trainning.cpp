#include<iostream>
using namespace std;

// この関数は書式フラグのステータス表示
void showflags()
{
    long f;
    long i;
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

    // 各フラグをチェック
    for(i=1, j=0; i<=0x4000; i = i<<1, j++)
        if(i & f)   cout << flgs[j] << " is on\n";
        else        cout << flgs[j] << " is off\n";
    
    cout << "\n";
}

main()
{
    // 書式フラグのデフォルト条件を表示
    showflags();

    long f=0x04A4;
    cout.flags(f);

    showflags();

    return 0;
}