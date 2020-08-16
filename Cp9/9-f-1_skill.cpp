#include<iostream>

std::ostream &tabs(std::ostream &stream)
{
    stream << '\t' << '\t' << '\t' ;
    stream.width(20);

    return stream;
}

main()
{
    std::cout << tabs << "Testing\n";

    return 0;
}