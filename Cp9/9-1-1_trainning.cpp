#include<iostream>

std::ostream &setup(std::ostream &stream)
{
    stream.width(10);
    stream.precision(4);
    stream.fill('*');

    return stream;
}

main()
{
    std::cout << setup << 123.123456;

    return 0;
}