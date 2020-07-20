#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=2)
    {
        std::cout << "Usage: PR <filename>\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open file\n";
        return 1;
    }

    while(!in.eof())
    {
        in.get(ch);
        std::cout << ch;
    }

    return 0;
}