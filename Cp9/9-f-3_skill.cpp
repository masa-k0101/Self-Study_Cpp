// Copy a file and reverse case of letters.

#include<iostream>
#include<fstream>
#include<ctype.h>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=3)
    {
        std::cout << "Usage: Copyrev <source> <target>\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file";
        return 1;
    }

    std::ofstream out(argv[1]);
    if(!out)
    {
        std::cout << "Cannot open output file";
        return 1;
    }

    while(!in.eof())
    {
        ch = in.get();
        if(islower(ch))     ch = toupper(ch);
        else                ch = tolower(ch);
        out.put(ch);
    };

    in.close();
    out.close();

    return 0;
}