// Copy a file and display number of chars copied
#include<iostream>
#include<fstream>

main(int argc, char *argv[])
{
    if(argc!=3)
    {
        std::cout << "Usage: COPY <input> <output>\n";
        return 1;
    }

    std::ifstream fin(argv[1]);     // 入力ファイルをオープン
    std::ofstream fout(argv[2]);    // 出力ファイルを作る

    if(!fout)
    {
        std::cout << "Cannot open output file.\n";
        return 1;
    }

    if(!fin)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    char ch;
    unsigned count = 0;
    
    fin.unsetf(std::ios::skipws);        // スペースをスキップしない
    while(!fin.eof())
    {
        fin >> ch;
        fout << ch;
        count++; 
    }    

    std::cout << "Number of bytes copied: " << count << '\n';
    return 0;
}