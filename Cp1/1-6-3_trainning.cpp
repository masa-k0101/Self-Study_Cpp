#include<iostream>

void f1(int a);
void f1(int a,int b);

main()
{
    f1(10);
    f1(10,20);
    return 0;
}

void f1(int a)
{
    std::cout << "In f1(int a)\n";
}

void f1(int a,int b)
{
    std::cout << "In f1(int a, int b)\n";
}