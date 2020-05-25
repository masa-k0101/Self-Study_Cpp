#include<iostream>

namespace A
{
    class samp
    {
            int i;
        public:
            samp(int n)
                { i = n; }
            int get_i()
                { return i; }
    };

    //o.iの平方を返す
    int sqr_it(samp o)
    {
        return o.get_i()*o.get_i();
    }
}

main()
{
    A::samp a(10), b(2);

    std::cout << sqr_it(a) << "\n";
    std::cout << sqr_it(b) << "\n";
    return 0;
}