// coordクラスについて+、-、=をオーバーロード
#include<iostream>

namespace A
{
    class coord
    {
            int x, y;
        public:
            coord()             { x=0; y=0; }
            coord(int i, int j) { x=i; y=j; }
            void get_xy(int &i, int &j)     { i=x; j=y; }
            coord operator+(coord ob2);
            coord operator-(coord ob2);
            coord operator=(coord ob2);
    };

    //coordクラスについて+をオーバーロード
    coord coord::operator+(coord ob2)
    {
        coord temp;

        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }

    //coordクラスについて+をオーバーロード
    coord coord::operator-(coord ob2)
    {
        coord temp;

        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        return temp;
    }

    //coordクラスについて=をオーバーロード
    coord coord::operator=(coord ob2)
    {
        coord temp;

        x = ob2.x;
        y = ob2.y;
        return *this;       //代入されたオブジェクトを返す
    }
}

main()
{
    A::coord o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3 = o1 + o2;           //2つのオブジェクトの加算　ここでopertor+をコール
    o3.get_xy(x,y);
    std::cout << "(o1+o2) X: " << x << ", Y " << y << "\n";

    o3 = o1 - o2;           //2つのオブジェクトの減算
    o3.get_xy(x,y);
    std::cout << "(o1-o2) X: " << x << ", Y " << y << "\n";

    o3 = o1;                //オブジェクトを代入する
    o3.get_xy(x,y);
    std::cout << "(o3=o1) X: " << x << ", Y " << y << "\n";

    return 0;
}