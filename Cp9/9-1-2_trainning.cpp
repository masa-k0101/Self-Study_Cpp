#include<iostream>
#include<iomanip>

// Attentionの出力
std::ostream &atn(std::ostream &stream)
{
    stream << "Attention: ";
    return stream;
}

// Please noteの出力
std::ostream &note(std::ostream &stream)
{
    stream << "Please Note: ";
    return stream;
}

main()
{
    std::cout << atn << "High voltage circuit\n";
    std::cout << note << "Trun off all light\n";

    return 0;
}