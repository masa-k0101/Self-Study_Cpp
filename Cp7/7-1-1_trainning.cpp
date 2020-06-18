#include<iostream>

namespace A
{
    class base
    {
            int x;
        public:
            void setx(int n)    { x = n; }
            void showx()        { std::cout << x << "\n"; }
    };

    //パブリックとして継承
    class derived : public base
    {
            int y;
        public:
            void sety(int n)    { y = n; }
            void showy()        { std::cout << y << "\n"; }
    };
}

main()
{
    A::derived ob;

    ob.setx(10);    //baseクラスのメンバにアクセス
    ob.sety(20);    //derivedクラスのメンバにアクセス

    ob.showx();     //baseクラスのメンバにアクセス
    ob.showy();     //derivedクラスのメンバにアクセス

    return 0;
}
