#include<iostream>
#include<cstdlib>

namespace A
{
    long mystrtol(const char *start, char **end, int base = 10)
    {
        return strtol(start, end, base);
    }
}

main()
{
    long i;
    const char *s1 = "100234";
    char *p;

    i = A::mystrtol(s1, &p, 16);
    std::cout << "Base 16: " << i << "\n";

    i = A::mystrtol(s1, &p, 10);
    std::cout << "Base 10: " << i << "\n";

    i = A::mystrtol(s1, &p);
    std::cout << "Base 10 by default: " << i << "\n";

    return 0;
}