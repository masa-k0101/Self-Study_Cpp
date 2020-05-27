// オブジェクトの2次元配列を作る
#include<iostream>

namespace A
{
    class samp
    {
            int a;
        public:
            samp(int n)   { a = n; }
            int get_a()   { return a; }
    };
}

main()
{
    A::samp ob[4][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int i;

    for(i=0; i<4; i++)
        {   std::cout << ob[i][0].get_a() << ' ';
            std::cout << ob[i][1].get_a() << "\n";
        }
    std::cout << "\n";
    return 0;
}