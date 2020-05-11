#include<iostream>

main()
{
    int i;
    int j;
    int k;

    std::cout << "Labor's work time? \n";
    std::cin >> i;
    std::cout << "Labor's payment per time? \n";
    std::cin >> j;
    k = i*j;
    std::cout << "Labor's summation of payment=" << k << "\n";
    return 0;
}