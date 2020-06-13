// coordクラスについて+をオーバーロード
#include<iostream>

namespace A
{
    class coo
    {
            int x, y;
        public:
            coo()             { x=0; y=0; }
            coo(int i, int j) { x=i; y=j; }
            void get_xy(int &i, int &j)     { i=x; j=y; }
            coo operator+(coo ob2);
    };

    //coordクラスについて+をオーバーロード
    coo coo::operator+(coo ob2)
    {
        coo temp;

        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }
}

main()
{
    A::coo o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3 = o1 + o2;

    o3.get_xy(x,y);
    std::cout << "(o1+o2) X: " << x << ", Y " << y << "\n";

    return 0;
}