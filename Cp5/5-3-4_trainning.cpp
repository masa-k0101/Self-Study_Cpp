#include<iostream>
#include<ctype.h>

namespace A
{
    const int ignore = 0;
    const int upper = 1;
    const int lower = 2;

    void print(const char *s, int how = -1);
}

main()
{
    A::print("Hello There\n", A::ignore);
    A::print("Hello There\n", A::upper);
    A::print("Hello There\n");             //大文字を続ける
    A::print("Hello there\n", A::lower);
    A::print("That's all\n");              //小文字を続ける

    return 0;
}

//文字の大きさを指定して文字列を印刷する、指定がなければ最近の指定の大きさを使う

void A::print(const char *s, int how)
{
    static int oldcase = ignore;

    //指定がなければ元の大きさを使う
    if(how<0)   how = oldcase;
    while(*s)
    {
        switch(how)
        {
            case upper: std::cout << (char) toupper(*s);
                break;
            case lower: std::cout << (char) tolower(*s);
                break;
            default:    std::cout << *s;
        }
        s++;
    }
    oldcase = how;
}