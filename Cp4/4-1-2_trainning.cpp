// 配列の初期化
#include<iostream>

namespace A
{
    class samp
    {
            int a;
        public:
            samp(int n)   { a = n; }
            int get_a()         { return a; }
    };
}

main()
{
    A::samp ob[4] = { -1, -2, -3, -4 };
    int i;

    for(i=0; i<4; i++)  std::cout << ob[i].get_a() << ' ';
    std::cout << "\n";

    return 0;
}