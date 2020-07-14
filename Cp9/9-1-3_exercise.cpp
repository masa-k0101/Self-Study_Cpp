#include<iostream>
#include<cstring>

namespace A
{
    std::istream &skipchar(std::istream &stream)
    {
        int i;
        char c;
    
        for(i=0; i<10; i++) stream >> c;

        return stream;
    }
}

main()
{
    char str[80];
    
    std::cout << "Enter some characters: ";
    std::cin >> A::skipchar >> str;

    std::cout << str << '\n';

    return 0;
}