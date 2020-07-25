#include<iostream>
#include<fstream>
#include<cstring>

main()
{
    std::ofstream out("test");
    if(!out)
    {
        std::cout << "Cannot open file";
        return 1;
    }

    double num = 100.45;
    char str[] = "This is a test";
    
    out.write((char *) &num, sizeof(double));
    out.write(str, strlen(str));

    out.close();

    return 0;
}