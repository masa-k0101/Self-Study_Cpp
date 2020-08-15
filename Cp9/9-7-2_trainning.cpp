#include<iostream>
#include<fstream>
#include<iomanip>

// Attention:
std::ostream &atn(std::ostream &stream)
{
    stream << "Attention: ";
    return stream; 
}

// Please note:
std::ostream &note(std::ostream &stream)
{
    stream << "Please Note: ";
    return stream;
}

main()
{
    std::ofstream out("test");

    if(!out)
    {
        std::cout << "Cannot open output file\n";
        return 1;
    }

    // 画面に書き込む
    std::cout << atn << "High voltage circulation\n";
    std::cout << note << "Turn off all lights\n";

    // ファイルに書き込む
    std::cout << atn << "High voltage circulation\n";
    std::cout << note << "Turn off all lights\n";

    out.close();
    
    return 0;
}