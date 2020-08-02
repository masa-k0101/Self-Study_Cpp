#include<iostream>
#include<fstream>
#include<stdlib.h>

main(int argc, char *argv[])
{
    if(argc!=4)
    {
        std::cout << "Usage: CHANGE <filename> <byte> <char>/n";
        return 1;
    }

    std::fstream out(argv[1], std::ios::in|std::ios::out);
    if(!out)
    {
        std::cout << "Cannot open file";
        return 1;
    }

    out.seekp(atoi(argv[2]), std::ios::beg);

    out.put(*argv[3]);
    out.close();

    return 0;
}