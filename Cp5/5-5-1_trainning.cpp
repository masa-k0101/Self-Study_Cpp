// 関数ポインタのオーバーロード関数への代入の例
#include<iostream>

namespace A
{
    // count個のスペースの入力
    void space(int count)
    {
        for( ; count; count--)  std::cout << ' ';
    }

    void space(int count, char ch)
    {
        for( ; count; count--)  std::cout << ch;
    }
}

main()
{
    // 1つのintパラメータを持つvoid関数のポインタを作る
    void (*fp1)(int);

    // 1つのintパラメータと1つの文字パラメータを持つvoid関数のポインタを作る
    void (*fp2)(int, char);

    fp1 = A::space;              //space(int)のアドレスを得る

    fp2 = A::space;              //space(int, char)のアドレスを得る

    fp1(22);
    std::cout << "|\n";

    fp2(30, 'x');
    std::cout << "|\n";

    return 0;
}