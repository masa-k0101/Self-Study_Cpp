// Copy and convert tabs to spaces.
#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    if(argc!=3)
    {
        std::cout << "Usage: CPY <in> <out>";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file\n";
        return 1;
    }

    std::ofstream out(argv[2]);
    if(!out)
    {
        std::cout << "Cannot open output file\n";
        return 1;
    }

    char ch;
    int i = 8;

    while(!in.eof())
    {
        in.get(ch);
        if(ch=='\t')    for( ; i>0; i--)    out.put(' ');
        else                                out.put(ch);
        if(i==1 || ch=='\n')   i = 8;
        i--;
    }

    in.close();
    out.close();

    return 0;
}