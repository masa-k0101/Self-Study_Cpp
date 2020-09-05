// 静的メンバ変数の例
#include<iostream>

class myclass
{
        static int i;
    public:
        void seti(int n)    { i = n; }
        int geti()          { return i; }
};

// myclass::iの定義、iはmyclassに対しプライベート
int myclass::i;

main()
{
    myclass o1, o2;

    o1.seti(10);

    std::cout << "o1.i: " << o1.geti() << '\n';   // 10を表示
    std::cout << "o2.i: " << o2.geti() << '\n';   // また10を表示

    return 0;
}
