// Copy a file and reverse case of letters with error checking.
#include<iostream>
#include<fstream>
#include<ctype.h>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=3)
    {
        std::cout << "Usage: COPYREV <source> <target>\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file";
        return 1;
    }

    std::ofstream out(argv[2]);
    if(!out)
    {
        std::cout << "Cannot open output file";
        return 1;
    }

    while(!in.eof())
    {
        ch = in.get();
        if(!in.good())      return 1;
        if(islower(ch))     ch = toupper(ch);
        else                ch = tolower(ch);
        out.put(ch);
        if(!out.good())     return 1;
    };

    in.close();
    out.close();
    if(!in.good() && !out.good())   return 1;

    return 0;
}