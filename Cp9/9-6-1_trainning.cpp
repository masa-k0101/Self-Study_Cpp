#include<iostream>
#include<fstream>

void checkstatus(std::ifstream &in);

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage: DISPLAY <filename>\n";
        return 1;
    }

    std::ifstream in(argv[1]);

    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    char c;
    while(in.get(c))
    {
        std::cout << c;
        checkstatus(in);
    }

    checkstatus(in);        // 最後のステータスをチェック
    in.close();
    return 0;
}

void checkstatus(std::ifstream &in)
{
    int i;

    i = in.rdstate();

    if(i & std::ios::eofbit)
        std:: cout << "EOF encountered\n";
    else if(i & std::ios::failbit)
        std::cout << "Non-Fatal I/O error\n";
    else if(i & std::ios::badbit)
        std::cout << "Fatal I/O error\n";
}