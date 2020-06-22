// 多重継承
#include<iostream>

namespace A
{
    class B1
    {
            int a;
        public:
            B1(int x)   { a = x; }
            int geta()  { return a; }
    };

    // 直接基本クラスを継承
    class D1 : public B1
    {
            int b;
        public:
            D1(int x, int y) : B1(y)   // yをB1に渡す
            {
                b = x;
            }
            int getb()  { return b; }
    };

    // 派生クラスと間接的に基本クラスを継承
    class D2 : public D1
    {
            int c;
        public:
            D2(int x, int y, int z) : D1(y, z)  // 引数をD1に渡す
            {
                c = x;
            }

            /* 基本クラスはパブリックとして継承されているので、
            D2はB1とD1の両方のパブリック要素にアクセスする*/
            void show()
            {
                std::cout << geta() << ' ' << getb() << ' ';
                std::cout << c << "\n";
            }
    };
}

main()
{
    A::D2 ob(1, 2, 3);

    ob.show();
    // geta()とgetb()は依然としてパブリック
    std::cout << ob.geta() << ' ' << ob.getb() << "\n";

    return 0;
}