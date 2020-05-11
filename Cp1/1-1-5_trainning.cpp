#include <iostream>

main()
{
    char ch;
    std::cout << "Enter keys, x to stop. \n";

    do
    {
        std::cout << ":" ;
        std::cin >> ch;
    }
    while (ch !='x');

    return 0;
}