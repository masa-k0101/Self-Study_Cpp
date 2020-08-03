// seekg()の例
#include<iostream>
#include<fstream>
#include<stdlib.h>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=3)
    {
        std::cout << "Usage: LOCATE <filename> <loc>/n";
        return 1;
    }

    std::ifstream in(argv[1]);

    if(!in)
    {
        std::cout << "Cannot open input file";
        return 1;
    }

    in.seekg(atoi(argv[2]), std::ios::beg);

    while(!in.eof())
    {
        in.get(ch);
        std::cout << ch;
    }

    in.close();

    return 0;
}