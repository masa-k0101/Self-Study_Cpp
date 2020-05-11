#include <iostream>

main()
{
    int i;
    float f;
    char s[80];

    std::cout << "Enter an integer, float, and string:";
    std::cin >> i >> f >> s;
    std::cout << "Heres your data: ";
    std::cout << i << ' ' << f << ' ' <<s;

    return 0;
}