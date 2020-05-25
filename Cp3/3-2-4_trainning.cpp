#include<iostream>

namespace A
{
    class samp
    {
            int i;
        public:
            samp(int n)
            {
                i = n;
                std::cout << "Constructing\n";
            }
            ~samp()
            {
                std::cout <<"Destructing\n";
            }
            int get_i() { return i; }
    };

    //o.iの平方に返す
    int sqr_it(samp o)
    {
        return o.get_i() * o.get_i();
    }
}

main()
{
    A::samp a(10);
    std::cout << sqr_it(a) << "\n";
    return 0;
}