// coord型のオブジェクト用のフレンドインサータを作る
#include<iostream>
using namespace std;

class coord
{
        int x, y;
    public:
        coord()                 { x = 0; y = 0; }
        coord(int i, int j)     { x = i; y = j; }
        friend ostream &operator<<(ostream &stream, coord ob);
};

ostream &operator<<(ostream &stream, coord ob)
{
    stream << ob.x << ", " << ob.y << '\n';
    return stream;
}

main()
{
    coord a(1, 1), b(10, 23);

    std::cout << a << b;

    return 0;
}