// coordクラスについて、+と=をオーバーロードし、coordを基本として使う
#include<iostream>

namespace A
{
    class coord
    {
        public:
            int x, y;       // 座標値
            coord()                     { x=0; y=0; }
            coord(int i, int j)         { x=i; y=j; }
            void get_xy(int &i, int &j) { i=x; j=y; }
            coord operator+(coord ob2);
            coord operator-(coord ob2);
            coord operator=(coord ob2);
    };

    //coordクラスについて+をオーバーロード
    coord coord::operator+(coord ob2)
    {
        coord temp;

        std::cout << "Using coord operator+()\n";

        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }

    //coordクラスについて-をオーバーロード
    coord coord::operator-(coord ob2)
    {
        coord temp;

        std::cout << "Using coord operator-()\n";

        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        return temp;
    }

    //coordクラスについて=をオーバーロード
    coord coord::operator=(coord ob2)
    {
        coord temp;

        std::cout << "Using coord operator=()\n";

        x = ob2.x;
        y = ob2.y;
        return *this;       // 代入されたオブジェクトを返す
    }

    class quad : public coord
    {
            int quadrant;
        public:
            quad()      { x = 0; y = 0; quadrant = 0; }
            quad(int x, int y) : coord(x, y)
            {
                if(x>=0 && y>=0)        quadrant = 1;
                else if(x<0 && y>=0)    quadrant = 2;
                else if(x<0 && y<0)     quadrant = 3;
                else                    quadrant = 4;
            }
            void showq()
            {
                std::cout << "Point in Quadrant: " << quadrant << "\n";
            }
            quad operator=(coord ob2);
    };

    quad quad::operator=(coord ob2)
    {
        std::cout << "using quad operator=()\n";

        x = ob2.x;
        y = ob2.y;
        if(x>=0 && y>=0)        quadrant = 1;
        else if(x<0 && y>=0)    quadrant = 2;
        else if(x<0 && y<0)     quadrant = 3;
        else                    quadrant = 4;

        return *this; 
    }
}

main()
{
    A::quad o1(10, 10), o2(15, 3), o3;
    int x, y;

    o3 = o1 + o2;       // 2つのオブジェクトの加算　operator+()をコール
    o3.get_xy(x, y);
    o3.showq();
    std::cout << "(o2+o2) X: " << x << ", Y: " << y << "\n";

    o3 = o1 - o2;       // 2つのオブジェクトの減算　operator-()をコール
    o3.get_xy(x, y);
    o3.showq();
    std::cout << "(o2-o2) X: " << x << ", Y: " << y << "\n";

    o3 = o1;            // オブジェクトを代入　operator=()をコール
    o3.get_xy(x, y);
    o3.showq();
    std::cout << "(o3=o1) X: " << x << ", Y: " << y << "\n";

    return 0;
}