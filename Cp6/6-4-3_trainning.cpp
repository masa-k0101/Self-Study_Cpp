// coordクラスについて参照を使って-をオーバーロード
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
            coord operator-(coord ob2);
            coord operator-();
    };

    //coordクラスについて-をオーバーロード
    coord coord::operator-(coord ob2)
    {
        coord temp;

        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        return temp;
    }

    //coordクラスについて、単項-をオーバーロード
    coord coord::operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }
}

main()
{
    A::coord o1(10, 10), o2(5, 7);
    int x, y;

    o1 = o1 - o2;
    o1.get_xy(x,y);
    std::cout << "(o1-o2) X: " << x << ", Y " << y << "\n";

    o1 = -o1;
    o1.get_xy(x,y);
    std::cout << "(-o1) X: " << x << ", Y " << y << "\n";

    return 0;
}