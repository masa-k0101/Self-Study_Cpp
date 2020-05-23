#include<iostream>

namespace A
{
    union swaps
    {
        unsigned char c[2];
        unsigned i;
        swaps(unsigned x);
        void swp();
    };

    swaps::swaps(unsigned x)
    {
        i = x;
    }

    void swaps::swp()
    {
        unsigned char temp;
        temp = c[0];
        c[0] = c[1];
        c[1] = temp;
    }
}

main()
{
    A::swaps ob(2);
    ob.swp();
    std::cout << ob.i;
    return 0;
}