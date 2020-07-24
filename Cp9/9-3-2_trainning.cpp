#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    char ch;

    if(argc!=2)
    {
        std::cout << "Usage: WRITE <filename>\n";
        return 1;
    }

    std::ofstream out(argv[1]);
    if(!out)
    {
        std::cout << "Cannot open file";
        return 1;
    }

    std::cout << "Enter a $ to stop\n";

    do
    {
        std::cout << ": ";
        std::cin.get(ch);
        out.put(ch);
    }
        while(ch!='$');
    
    out.close();

    return 0;
}