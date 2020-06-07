#include<iostream>

namespace A
{
    class myclass
    {
            int x;
        public:
            // 2通りにコンストラクタをオーバーロード
            myclass()       { x = 0; }      //初期化なし
            myclass(int n)  { x = n; }      //初期化あり
            int getX()      { return x; }
            void setx(int n){ x = n; }
    };
}

main()
{
    A::myclass *p;      
    A::myclass ob(10);      //単一の変数を初期化
    p = new A::myclass[10];    //ここで初期化子を使えない

    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    int i;

    // obへの全要素を初期化
    for(i=0; i<10; i++)     p[i] = ob;

    for(i=0; i<10; i++)
    {
        std::cout << "p[" << i << "]: " << p[i].getX() << "\n";
    }
    return 0;
}