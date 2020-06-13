// coordクラスについて、==と&&をオーバーロード
#include<iostream>

namespace A
{
    class coord
    {
            int x, y;       //座標値
        public:
            coord()                     { x=0; y=0; }
            coord(int i, int j)         { x=i; y=j; }
            void get_xy(int &i, int &j) { i=x; j=y; }
            int operator==(coord ob2);
            int operator&&(coord ob2);
    };

    //coordクラスについて==をオーバーロード
    int coord::operator==(coord ob2)
    {
        if(x==ob2.x && y==ob2.y)    return 1;
        else                        return 0;
    }

    //coordクラスについて&&をオーバーロード
    int coord::operator&&(coord ob2)
    {
        return ((x && ob2.x) && (y && ob2.y));
    }
}

main()
{
    A::coord o1(10, 10), o2(5, 3), o3(10, 10), o4(0, 0);

    if(o1==o2)      std::cout << "o1 same as o2\n";
    else            std::cout << "o1 and o2 differ\n";

    if(o1==o3)      std::cout << "o1 same as o3\n";
    else            std::cout << "o1 and o3 differ\n";

    if(o1&&o2)      std::cout << "o1 && o2 is true\n";
    else            std::cout << "o1 && o2 is fallen\n";

    if(o1&&o4)      std::cout << "o1 && o4 is true\n";
    else            std::cout << "o1 && o4 is fallen\n";

    return 0;
}