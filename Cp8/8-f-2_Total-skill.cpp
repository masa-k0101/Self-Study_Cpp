#include<iostream>
#include<time.h>

namespace A
{
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

    std::cout << w;

    return 0;
}