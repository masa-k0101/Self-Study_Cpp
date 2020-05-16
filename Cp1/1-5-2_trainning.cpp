#include<iostream>

//このプログラムはコンパイルされない
main()
{
    int a,b,c;
    std::cout << "Enter two numbers:";
    std::cin >> a >>b;
    c = sum(a,b);
    std::cout << "Sum is: " <<c ;

    return 0;
}

//この関数はプロトタイプが必要
sum(int a, int b)
{
    return a+b;
}