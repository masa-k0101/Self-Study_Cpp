// getline()を使ってスペースを含む文字列を読む
#include<iostream>
#include<fstream>

main()
{
    char str[80];

    std::cout << "Enter your name: ";
    std::cin.getline(str, 79);

    std::cout << str << '\n';

    return 0;
}