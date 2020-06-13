// ob+int と　ob+obに使うための+のオーバーロード
#include<iostream>

namespace A
{
    class coord
    {
            int x, y;       //座標軸
        public:
            coord()             { x=0; y=0; }
            coord(int i, int j) { x=i; y=j; }
            void get_xy(int &i, int &j)     { i=x; j=y; }
            coord operator+(coord ob2);     // ob+ob
            coord operator+(int i);         // ob+int
    };

    //coordクラスについて+をオーバーロード
    coord coord::operator+(coord ob2)
    {
        coord temp;

        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }

    //pb+intに使う+のオーバーロード
    coord coord::operator+(int i)
    {
        coord temp;

        temp.x = x + i;
        temp.y = y + i;
        return temp;
    }
}

main()
{
    A::coord o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3 = o1 + o2;           //2つのオブジェクトの加算　ここでopertor+をコール
    o3.get_xy(x,y);
    std::cout << "(o1+o2) X: " << x << ", Y " << y << "\n";

    o3 = o1 + 100;           //2つのオブジェクトの加算
    o3.get_xy(x,y);
    std::cout << "(o1+100) X: " << x << ", Y " << y << "\n";

    return 0;
}