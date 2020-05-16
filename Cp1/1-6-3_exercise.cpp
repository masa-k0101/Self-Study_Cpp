#include<iostream>

int min(int a, int b);
double min(double a, double b);
char min(char a, char b);

main()
{
    double a,b;
    std::cout << "Please imput by 1st number: \n";
    std::cin >> a;
    std::cout << "Please imput by 2nd number: \n";
    std::cin >> b;
    std::cout << "Min number is " << min(a,b) << "\n";
    return 0;
}

int min(int a, int b)
{
    return a > b? (int)b: (int)a;
}

double min(double a, double b)
{
    return a > b? (double)b: (double)a;
}

char min(char a, char b)
{
    return a > b? (char)b: (char)a;
}