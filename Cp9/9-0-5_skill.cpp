#include<iostream>

namespace A
{
    class date
    {
            char d[9];      // store date as string: mm/dd/yy
        public:
            friend std::ostream &operator<<(std::ostream &stream, date ob);
            friend std::istream &operator>>(std::istream &stream, date &ob);
    };

    std::ostream &operator<<(std::ostream &stream, date ob)
    {
        stream << ob.d << '\n';
        
        return stream;
    }

    std::istream &operator>>(std::istream &stream, date &ob)
    {
        std::cout << "Enter date (mm/dd/yy): ";
        stream >> ob.d;

        return stream;
    }
}

main()
{
    A::date ob;

    std::cin >> ob;
    std::cout << ob;
    
    return 0;
}