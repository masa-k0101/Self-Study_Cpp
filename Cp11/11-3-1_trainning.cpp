// リンケージ指定子の例
#include<iostream>

extern "C" int func(int x);     // c関数としてリンク

// 次の関数はc関数としてリンク
int func(int x)
{
    return x/3;
}