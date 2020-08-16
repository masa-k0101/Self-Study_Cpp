#include<iostream>
#include<ctype.h>

std::istream &findalpha(std::istream &stream)
{
    char ch;

    do 
    {
        stream.get(ch);
    }
    while(!isalpha(ch));
    return stream;
}

main()
{
    char str[80];

    std::cin >> findalpha >> str;
    std::cout << str << '\n';

    return 0;
}