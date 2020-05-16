#include<iostream>
#include<string.h>

main()
{
    char s[80];
    int size;

    std::cout << "Please imput strings: \n";
    std::cin >> s;

    std::cout << "Length of strings:" << strlen(s) << "\n";
    return 0;
}