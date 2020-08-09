#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=2)
    {
        std::cout << "PR: <filename>\n";
        return 1;
    }

    std::ifstream in(argv[1]);

    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    while(!in.eof())
    {
        in.get(ch);     // エラーをチェック
        if(!in.good() && !in.eof())
        {
            std::cout << "I/O Error...terminating\n";
            return 1;
        }
        std::cout << ch;
    }

    in.close();
    return 0;
}