// coordクラスについて、++をオーバーロード
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
            friend coord operator++(coord &ob);
    };

    // フレンドを使って、++をオーバーロード
    coord operator++(coord &ob)     // 参照パラメータを使う
    {
        ob.x++;
        ob.y++;
        return ob;      // コールでできたオブジェクトを返す
    }
}

main()
{
    A::coord o1(10, 10);
    int x, y;

    ++o1;       //オブジェクトをインクリメント
    o1.get_xy(x, y);
    std::cout << "(o1++) X: " << x << ", Y: " << y << "\n";

    return 0;
}