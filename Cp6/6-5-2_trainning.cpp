// 柔軟性を持たせるためにフレンド演算子関数を使う
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
            friend coord operator+(coord ob1, int i);
            friend coord operator+(int i, coord ob1);
    };

    // ob+int にオーバーロード
    coord operator+(coord ob1, int i)
    {
        coord temp;

        temp.x = ob1.x + i;
        temp.y = ob1.y + i;
        return temp;
    }

    // int+ob にオーバーロード
    coord operator+(int i, coord ob1)
    {
        coord temp;

        temp.x = ob1.x + i;
        temp.y = ob1.y + i;
        return temp;
    }
}

main()
{
    A::coord o1(10, 10);
    int x, y;

    o1 = o1 + 10;       //オブジェクト+整数
    o1.get_xy(x,y);
    std::cout << "(o1+10) X: " << x << ", Y " << y << "\n";

    o1 = 99 + o1;       //整数+オブジェクト
    o1.get_xy(x,y);
    std::cout << "(99+o1) X: " << x << ", Y " << y << "\n";

    return 0;
}