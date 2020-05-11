#include<iostream>

main()
{
    int a,b,d,min;

    std::cout << "Enter two numbers \n";
    std::cin >> a >> b;
    if(a>b)
        {
            min = b;
        }
    else
        {
            min = a;
        }
    
    for (d = 2; d < min; d++)
        {
            if (d = min)
            {
                std::cout << "No common denominators \n";
            }
        }
    std::cout << "The lowest common denomintor is " << d << "\n";

    return 0;
}