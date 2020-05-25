//オブジェクトを返すとエラーが発生
#include<iostream>
#include<cstring>
#include<cstdlib>

namespace A
{
    class samp
    {
            char *s;
        public:
            samp()      { s = '\0'; }
            ~samp()     { if(s) free(s); std::cout << "Freeing s\n";}
            void show() { std::cout << s << "\n"; }
            void set(const char *str);
    };

    //文字列をロード
    void samp::set(const char *str)
    {
        s = (char *) malloc(strlen(str));
        if(!s)
        {
            std::cout << "Allocation error\n";
            exit(1);
        }
        strcpy(s, str);
    }

    //samp型のオブジェクトを返す
    samp input()
    {
        char s[80];
        samp temp;

        std::cout << "Enter a string: ";
        std::cin >> s;

        temp.set(s);
        return temp;
    }
}

main()
{
    A::samp ob;

    //返されたオブジェクトをobに代入
    ob = A::input();   //これはエラーを起こす
    ob.show();
    return 0;
}