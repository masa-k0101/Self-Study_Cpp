#include<iostream>
#include<fstream>

main()
{
    std::ifstream in("test");
    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    double num;
    char str[80];
    
    in.read((char *) &num, sizeof(double));
    in.read(str, 15);

    in.close();

    return 0;
}