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
            coord operator<<(int i);
            coord operator>>(int i);
    };

    coord coord::operator<<(int i)
    {
        coord temp;
        temp.x = x << i;
        temp.y = y << i;
        return temp;
    }

    coord coord::operator>>(int i)
    {
        coord temp;
        temp.x = x >> i;
        temp.y = y >> i;
        return temp;
    }
}

main()
{
    A::coord o1(4, 4), o2;
    int x, y;

    o2 = o1 << 2;
    o2.get_xy(x, y);
    std::cout << "(o1<<o2) X: " << x << ", Y: " << y << "\n";

    o2 = o1 >> 2;
    o2.get_xy(x, y);
    std::cout << "(o1>>o2) X: " << x << ", Y: " << y << "\n";

    return 0;
}