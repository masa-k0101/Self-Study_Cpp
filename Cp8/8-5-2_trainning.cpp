// coord型のオブジェクト用のフレンドでないインサータを作る
#include<iostream>

namespace A
{
    class coord
    {
        public:
            int x, y;       // パブリックでなければならない
            coord()                 { x = 0; y = 0; }
            coord(int i, int j)     { x = i; y = j; }
            friend std::ostream &operator<<(std::ostream &stream, coord ob);
    };

    // coordクラス用のインサータ
    std::ostream &operator<<(std::ostream &stream, coord ob)
    {
        stream << ob.x << ", " << ob.y << '\n';
        return stream;
    }
}

main()
{
    A::coord a(1, 1), b(10, 23);

    std::cout << a << b;

    return 0;
}