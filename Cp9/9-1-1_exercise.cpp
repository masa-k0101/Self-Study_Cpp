#include<iostream>
#include<time.h>

namespace A
{
    std::ostream &td(std::ostream &stream)
    {
        stream << "Time is: ";
        return stream;
    }

    class watch
    {
            time_t t;
        public:
            watch()     { t = time(NULL); }
            friend std::ostream &operator<<(std::ostream &stream, watch ob);
    };

    std::ostream &operator<<(std::ostream &stream, watch ob)
    {
        struct tm *localt;

        localt = localtime(&ob.t);
        stream << asctime(localt) << '\n';

        return stream;
    }
}

main()
{
    A::watch w;

    std::cout << A::td << w;

    return 0;
}