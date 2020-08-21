#include<iostream>

std::ostream &setsci(std::ostream &stream)
{
    stream.setf(std::ios::scientific | std::ios::uppercase);

    return stream;
}

main()
{
    double f = 123.23;

    std::cout << setsci << f;
    std::cout << '\n';

    return 0;
}