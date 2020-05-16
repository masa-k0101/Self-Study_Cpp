#include<iostream>
#include<cmath>

int spoot(int n);
long double spoot(long n);
double spoot(double n);

main()
{
    double num;
    std::cout << "Please imput by number: \n";
    std::cin >> num;
    std::cout << "Answer = " << spoot(num) << "\n";
    return 0;
}

int spoot(int n)
{
    return sqrt(n);
}

long double spoot(long double n)
{
    return (long double) sqrt((double) n);
}

double spoot(double n)
{
    return (double) sqrt((double) n);
}