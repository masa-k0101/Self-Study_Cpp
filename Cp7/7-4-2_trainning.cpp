// 多重継承
#include<iostream>

namespace A
{
    // 最初の基本クラスを作る
    class B1
    {
            int a;
        public:
            B1(int x)   { a = x; }
            int geta()  { return a; }
    };

    // 2番目の基本クラスを作る
    class B2
    {
            int b;
        public:
            B2(int x)   { b = x; }
            int getb()  { return b; }
    };
    
    // 2つの基本クラスを継承する
    class D : public B1, public B2
    {
            int c;
        public:
            // ここで、zとyは直接B1とB2に渡される
            D(int x, int y, int z) : B1(z), B2(y)
            {
                c = x;
            }

            // 基本クラスはパブリックとして継承されたのでDはB1とB2の両方の
            // パブリック要素にアクセスする
            void show()
            {
                std::cout << geta() << ' ' << getb() << ' ';
                std::cout << c << "\n";
            }
    };
}

main()
{
    A::D ob(1, 2, 3);

    ob.show();

    return 0;
}