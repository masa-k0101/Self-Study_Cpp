#include<iostream>

int rotate(int n);
long rotate(long n);

int rotate(int n)
{
    int x;
    if(n & 0x8000)  x=1;
    else            x=0;
    
    n = n << 1;
    n += x;
    return n;
}

long rotate(long n)
{
    int x;
    if(n & 0x80000000)  x=1;
    else                x=0;
    
    n = n << 1;
    n += x;
    return n;
}

main()
{
    int n;
    long l;
    n = 0b1000;
    l = 0b1000000000000000;
    
    std::cout << "int rotation" << rotate(n) << "\n";
    std::cout << "long rotation" << rotate(l) << "\n";
    return 0;
}