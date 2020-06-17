#include<iostream>

namespace A
{
    class three_d
    {
            int x, y, z;
        public:
            three_d()                     { x=0; y=0; z=0; }
            three_d(int i, int j, int k)  { x=i; y=j; z=k; }
            void get(int &i, int &j, int &k)     { i=x; j=y; k=z; }
            three_d operator+(three_d &ob2);
            three_d operator-(three_d &ob2);
            friend three_d operator++(three_d &ob);
            friend three_d operator--(three_d &ob);
    };

    three_d three_d::operator+(three_d &ob2)
    {
        three_d temp;

        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        temp.z = z + ob2.z;
        return temp;
    }

    three_d three_d::operator-(three_d &ob2)
    {
        three_d temp;

        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        temp.z = z - ob2.z;
        return temp;
    }

    three_d operator++(three_d &ob)
    {
        ob.x++;
        ob.y++;
        ob.z++;
        return ob;       //代入されたオブジェクトを返す
    }

    three_d operator--(three_d &ob)
    {
        ob.x--;
        ob.y--;
        ob.z--;
        return ob;       //代入されたオブジェクトを返す
    }
}

main()
{
    A::three_d o1(10, 10, 10), o2(5, 3, 1), o3;
    int x, y, z;

    o3 = o1 + o2;
    o3.get(x,y,z);
    std::cout << "(o1+o2) X: " << x << ", Y: " << y << ", Z: " << z << "\n";

    o3 = o1 - o2;
    o3.get(x,y,z);
    std::cout << "(o1-o2) X: " << x << ", Y: " << y << ", Z: " << z << "\n";

    ++o2;
    o2.get(x,y,z);
    std::cout << "(o1++) X: " << x << ", Y: " << y << ", Z: " << z << "\n";

    --o1;
    o1.get(x,y,z);
    std::cout << "(o1--) X: " << x << ", Y: " << y << ", Z: " << z << "\n";

    return 0;
}