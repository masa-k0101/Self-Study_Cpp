// すべてのオブジェクトに独立の静的メンバを参照
#include<iostream>

class myclass
{
    public:
        static int i;
        void seti(int n)    { i = n; }
        int geti()          { return i; }
};

// myclass::iの定義、iはmyclassに対しプライベート
int myclass::i;

main()
{
    myclass o1, o2;

    // iを直接セット
    myclass::i = 100;   // オブジェクトは参照されない

    std::cout << "o1.i: " << o1.geti() << '\n';   // 100を表示
    std::cout << "o2.i: " << o2.geti() << '\n';   // また100を表示

    return 0;
}