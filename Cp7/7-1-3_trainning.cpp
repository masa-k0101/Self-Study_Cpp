// このプログラムは修正済
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

    // baseをプライベートとして継承
    class derived : private base
    {
            int y;
        public:
            // setxはderivedクラス内でアクセス可能
            void setxy(int n, int m)    { setx(n); y = m; }

            // showxはderivedクラス内でアクセス可能
            void showxy()               { showx(); std::cout << y << "\n"; }
    };
}

main()
{
    A::derived ob;

    ob.setxy(10, 20);    
    
    ob.showxy();

    return 0;
}
