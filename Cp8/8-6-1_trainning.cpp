// coord型のオブジェクト用のフレンドエクストラクタを追加
#include<iostream>

namespace A
{
    class coord
    {
            int x, y;
        public:
            coord()                 { x = 0; y = 0; }
            coord(int i, int j)     { x = i; y = j; }
            friend std::ostream &operator<<(std::ostream &stream, coord ob);
            friend std::istream &operator>>(std::istream &stream, coord &ab);
    };

    std::ostream &operator<<(std::ostream &stream, coord ob)
    {
        stream << ob.x << ", " << ob.y << '\n';
        return stream;
    }

    std::istream &operator>>(std::istream &stream, coord &ob)
    {
        std::cout << "Enter coordinates(two): ";
        stream >> ob.x >> ob.y;
        return stream;
    }
}

main()
{
    A::coord a(1, 1), b(10, 23);

    std::cout << a << b;
    
    std::cin >> a;
    std::cout << a;

    return 0;
}