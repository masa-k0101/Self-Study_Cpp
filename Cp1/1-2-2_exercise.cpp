#include<iostream>

main()
{
    float i;
    float j;
    do
    {
    std::cout << "Please imput how feet? \n";
    std::cin >> i;
    j=i*12;
    std::cout << "Imput longness is " << j << "inch \n";
    } 
    while (i != 0);
    
    return 0;
}
