#include<iostream>
#include<fstream>

main()
{
    std::ofstream fout("test");      // 正規の出力ファイル

    if(!fout)
    {
        std::cout << "Cannot open output file.\n";
        return 1;
    }

    fout << "Hello!\n";
    fout << 100 << ' ' << std::hex << 100 << std::endl;

    fout.close();

    std::ifstream fin("test");      // 正規の入力ファイルをオープン
    if(!fin)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    char str[80];
    int i;

    fin >> str >> i;
    std::cout << str << ' ' << i << std::endl;

    fin.close();

    return 0;
}