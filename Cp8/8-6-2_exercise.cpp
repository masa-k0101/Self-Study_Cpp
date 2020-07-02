#include<iostream>

namespace A
{
    class factor
    {
            int num;
            int lowf;
        public:
            factor(int i);
            friend std::ostream &operator<<(std::ostream &stream, factor ob);
            friend std::istream &operator>>(std::istream &stream, factor &ob);
    };

    factor::factor(int i)
    {
        int n;
        num = i;

        for(n=2; n<(i/2); n++)
            if(!(i%n))  break;
        
        if(n<(i/2))     lowf = n;
        else            lowf = 1;

    }

    std::istream &operator>>(std::istream &stream, factor &ob)
    {
        stream >> ob.num;

        int n;

        for(n=2; n<(ob.num/2); n++)
            if(!(ob.num%n))  break;
        
        if(n<(ob.num/2))    ob.lowf = n;
        else                ob.lowf = 1;

        return stream;
    }

    std::ostream &operator<<(std::ostream &stream, factor ob)
    {
        stream << ob.lowf << " is low factor of ";
        stream << ob.num << '\n';

        return stream;
    }
}

main()
{
    A::factor o(32);

    std::cout << o;

    std::cout << "Enter a number: ";
    std::cin >> o;
    std::cout << o;

    return 0;
}