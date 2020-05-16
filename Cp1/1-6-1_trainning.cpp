#include<iostream>

namespace A
{
    // abs()を3通りにオーバーロード
    int abs(int n);
    long abs(long n);
    float abs(float n);
}

main()
{
    std::cout << "Absolute value of -10: " << abs(-10) << "\n";
    std::cout << "Absolute value of -10L: " << abs(-10L) << "\n";
    std::cout << "Abosulute value of -10.01L: " << abs(-10.0000031f) << "\n";
    return 0;
}

// abs()を整数用に
int abs(int n)
{
    std::cout << "In interger abs() \n";
    return n<0 ? -n : n;
}

// abs()を倍長型整数用に
long abs(long n)
{
    std::cout << "In long abs() \n";
    return n<0 ? -n : n;
}

// abs()を浮動小数点用に
float abs(float n)
{
    std::cout << "In double abs() \n";
    return n<0 ? -n : n;
}