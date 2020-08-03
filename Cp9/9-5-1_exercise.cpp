// Display a file backwards on the screen
#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage: REVERSE <filename>\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file\n";
        return 1;
    }

    char ch;
    long i;

    // go to end of file (less eof char)
    in.seekg(0, std::ios::end);
    i = in.tellg()-2;

    for( ; i>=0; i--)
    {
        in.seekg(i, std::ios::beg);
        in.get(ch);
        std::cout << ch;
    }

    in.close();

    return 0;
}