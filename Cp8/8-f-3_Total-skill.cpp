#include<iostream>

namespace A
{
    class ft_to_inches
    {
            double feet;
            double inches;
        public:
            void set(double f)
            {
                feet = f;
                inches = f * 12;
            }
            friend std::istream &operator>>(std::istream &stream, ft_to_inches &ob);
            friend std::ostream &operator<<(std::ostream &stream, ft_to_inches ob);
    };

    std::istream &operator>>(std::istream &stream, ft_to_inches &ob)
    {
        double f;

        std::cout << "Enter feet: ";
        stream >> f;
        ob.set(f);
        
        return stream;
    }

    std::ostream &operator<<(std::ostream &stream, ft_to_inches ob)
    {
        stream << ob.feet << " feet is " << ob.inches;
        stream << " inches\n";

        return stream;
    }
}

main()
{
    A::ft_to_inches x;

    std::cin >> x;
    std::cout << x;

    return 0;
}