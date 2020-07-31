// use getline() to display a file
#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage open input file\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "Cannot open input file\n";
        return 1;
    }

    char str[255];

    while(!in.eof())
    {
        in.getline(str, 254);
        std::cout << str << '\n';
    }

    in.close();

    return 0;
}