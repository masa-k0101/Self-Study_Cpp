// オブジェクトの2次元配列を作る
#include<iostream>

namespace A
{
    class samp
    {
            int a, b;
        public:
            samp(int n, int m)   { a = n; b = m; }
            int get_a()   { return a; }
            int get_b()   { return b; }
    };
}

main()
{
    A::samp ob[4][2] =
    {
        A::samp(1,2), A::samp(3,4), A::samp(5,6), A::samp(7,8),
        A::samp(9,10), A::samp(11,12), A::samp(13,14), A::samp(15,16)
    };
    int i;

    for(i=0; i<4; i++)
        {   std::cout << ob[i][0].get_a() << ' ';
            std::cout << ob[i][0].get_b() << "\n";
            std::cout << ob[i][1].get_a() << ' ';
            std::cout << ob[i][1].get_b() << "\n";
        }
    std::cout << "\n";
    return 0;
}