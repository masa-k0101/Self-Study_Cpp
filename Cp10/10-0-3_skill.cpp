// Search file.
#include<iostream>
#include<fstream>
#include<cstring>

main(int argc, char *argv[])
{
    if(argc!=3)
    {
        std::cout << "Usage: SEARCH <file> <word>";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file\n";
        return 1;
    }

    char str[255];
    int count = 0;

    while(!in.eof())
    {
        in >> str;
        if(!strcmp(str, argv[2]))   count++;
    }

    std::cout << argv[2] << " found " << count;
    std::cout << " number of times.\n";

    in.close();

    return 0;
}