//オブジェクトを返す
#include<iostream>
#include<cstring>

namespace A
{
    class samp
    {
            char s[80];
        public:
            void show() { std::cout << s << "\n"; }
            void set(const char *str) { strcpy(s, str); }
    };

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
    ob = A::input();
    ob.show();
    return 0;
}