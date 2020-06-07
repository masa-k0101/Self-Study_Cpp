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
    A::myclass o1[10];      //初期化なしの宣言
    
    //初期化なしの宣言
    A::myclass o2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i;

    for(i=0; i<10; i++)
    {
        std::cout << "o1[" << i << "]: " << o1[i].getx() << "\n";
        std::cout << "o2[" << i << "]: " << o2[i].getx() << "\n";
    }

    return 0;
}