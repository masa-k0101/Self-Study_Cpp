// オブジェクトへのポインタ
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
    A::samp ob[4] =
    {
        A::samp(1,2), A::samp(3,4), A::samp(5,6), A::samp(7,8)
    };
    int i;

    A::samp *p;
    p = &ob[3];     //配列の先頭アドレスを得る

    for(i=0; i<4; i++)
        {   std::cout << p->get_a() << ' ';
            std::cout << p->get_b() << "\n";
            p--;    //次のオブジェクトへ進む
        }
    std::cout << "\n";
    return 0;
}