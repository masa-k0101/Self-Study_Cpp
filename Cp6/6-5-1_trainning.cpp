// coordクラスについて、+をフレンドを使ってオーバーロード
#include<iostream>

namespace A
{
    class coord
    {
            int x, y;       //座標値
        public:
            coord()             { x=0; y=0; }
            coord(int i, int j) { x=i; y=j; }
            void get_xy(int &i, int &j)     { i=x; j=y; }
            friend coord operator+(coord ob1, coord ob2);
    };

    //coordクラスについて-をオーバーロード
    coord operator+(coord ob1, coord ob2)
    {
        coord temp;

        temp.x = ob1.x + ob2.x;
        temp.y = ob1.y + ob2.y;
        return temp;
    }
}

main()
{
    A::coord o1(10, 10), o2(-5, 7), o3;
    int x, y;

    o3 = o1 + o2;
    o3.get_xy(x,y);
    std::cout << "(o1+o2) X: " << x << ", Y " << y << "\n";

    return 0;
}