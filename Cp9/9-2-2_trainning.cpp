#include<iostream>
#include<fstream>
#include<stdio.h>

main(int argc, char *argv[])
{
    if(argc!=2)
    {
        std::cout << "Usage: WRITE <filename>\n";
        return 1;
    }

    std::ofstream out(argv[1]);      // 出力、正規ファイル

    if(!out)
    {
        std::cout << "Cannot open output file.\n";
        return 1;
    }

    char str[80];
    
    std::cout << "Write strings to disk, RETURN to stop/n";

    do
    {
        std::cout << ": ";
        gets(str);
        std::cout << str << std::endl;
    }   while (*str);
    
    out.close();
    return 0;
}