// Word count
#include<iostream>
#include<fstream>
#include<ctype.h>

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage: COUNT <input>\n";
        return 1;
    }

    std::ifstream in(argv[1]);     // 入力ファイルをオープン

    if(!in)
    {
        std::cout << "Cannot open input file\n";
        return 1;
    }

    int count = 0;
    char ch;

    in >> ch;       // find first nos-space char

    // after first non-space found
    while(!in.eof())
    {
        in.get(ch);
        if(isspace(ch)) count++; 
    }    

    std::cout << "Word count: " << count << '\n';
    
    in.close();

    return 0;
}