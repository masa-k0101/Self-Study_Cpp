#include<iostream>
using namespace std;

main()
{
    // デフォルト設定で表示
    cout << 100.0 << '\n';

    // ここで書式を変更
    cout.setf(ios::hex);
    cout << 100 << "\n";

    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout << 100 << "\n";

    int n = 100;
    /* 10進表示 */
    printf("n = %d\n", n);
 
    /* 8進表記 */
    printf("n = %o\n", n);
     
    /* 16進表記 */
    printf("n = %X\n", n);

    return 0;
}