#include<iostream>

namespace A
{
    class samp
    {
        //デフォルトでプライベート
            int a;
        protected:      //sampについてはプライベートのまま
            int b;
        public:
            int c;
            samp(int n, int m)  { a = n; b = m; }
            int geta()          { return a; }
            int getb()          { return b; }
    };
}

main()
{
    A::samp ob(10,20);

    //ob.b = 99; エラー　bはプロテクトなのでプライベート
    ob.c = 30;      //OK cはパブリック

    std::cout << ob.geta()  << ' ';
    std::cout << ob.getb() << ' ' << ob.c << "\n";

    return 0;
}