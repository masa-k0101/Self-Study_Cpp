#include<iostream>

namespace A
{
    union bits
    {
        bits(double n);
        void show_bits();
        double d;
        unsigned char c[sizeof(double)];
    };

    bits::bits(double n)
    {
        d = n;
    }

    void bits::show_bits()
    {
        int i,j;

        for(j=sizeof(double)-1; j>=0; j--)
        {
            std::cout << "Bit pattern in byte " << j << ": ";

            for(i=128; i; i >>= 1)
                if(i&c[j])  std::cout << "1";
                else        std::cout << "0";
            std::cout << "\n";
        }
    }
}

main()
{
    A::bits ob(1991.829);
    ob.show_bits();
    return 0;
}