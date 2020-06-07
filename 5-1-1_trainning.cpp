#include<iostream>

namespace A
{
    class myclass
    {
            int x;
        public:
            myclass()       { x = 0; }      //初期化なし
            myclass(int n)  { x = n; }      //初期化あり
            int getx()      { return x; }
    };
}

main()
{
    A::myclass o1(10);      //初期化ありの宣言
    A::myclass o2;          //初期化なしの宣言

    std::cout << "o1: " << o1.getx() << "\n";
    std::cout << "o2: " << o2.getx() << "\n";

    return 0;
}