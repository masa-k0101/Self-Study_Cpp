#include<iostream>
#include<fstream>

class coord
{
        int x, y;
    public:
        coord(int i, int j)     { x = i, y = j; }
        friend std::ostream &operator<<(std::ostream &stream, coord ob);
        friend std::istream &operator>>(std::istream &stream, coord &ob);
};

std::ostream &operator<<(std::ostream &stream, coord ob)
{
    stream << ob.x << ' ' << ob.y << '\n';

    return stream;
}

std::istream &operator>>(std::istream &stream, coord &ob)
{
    stream >> ob.x >> ob.y;

    return stream;
}

main()
{
    coord o1(1, 2), o2(3, 4);
    std::ofstream out("test");

    if(!out)
    {
        std::cout << "Cannot open output file\n";
        return 1;
    }

    out << o1 << o2;
    out.close();

    std::ifstream in("test");

    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    coord o3(0, 0), o4(0, 0);
    in >> o3 >> o4;

    std::cout << o3 << o4;
    
    return 0;
}