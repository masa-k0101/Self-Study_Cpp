// Copy a file and display number of chars copied
#include<iostream>
#include<fstream>

main()
{

    std::ofstream pout("phone");    // 出力ファイルを作る

    if(!pout)
    {
        std::cout << "Cannot open PHONE file.\n";
        return 1;
    }

    pout << "Isaac Newton 415 555-3423\n";
    pout << "Robert Goddard 213 555-2312\n";
    pout << "Enrico Fermi 202 555-1111\n";

    pout.close();
    
    return 0;
}