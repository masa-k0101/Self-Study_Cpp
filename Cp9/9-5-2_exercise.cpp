// Swap charcters in a file
#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage: SWAP <filename>\n";
        return 1;
    }

    std::fstream io(argv[1], std::ios::in | std::ios::out);
    if(!io)
    {
        std::cout << "Cannot open file\n";
        return 1;
    }

    char ch1, ch2;
    long i;

    for(i=0; !io.eof(); i+=2)
    {
        io.seekg(i, std::ios::beg);
        io.get(ch1);
        if(io.eof())    continue;
        io.get(ch2);
        if(io.eof())    continue;
        io.seekg(i, std::ios::beg);
        io.put(ch2);
        io.put(ch1);
    }

    io.close();

    return 0;
}