// 指定の文字列を画面中央に表示する
#include<iostream>
#include<cstring>
using namespace std;

void center(const char *s)
{
    int len;

    len = 40 + (strlen(s)/2);
    cout.width(len);
    cout << s << "\n";
};

main()
{
    center("I like C++");
    center("Masterpiece!");

    return 0;
}