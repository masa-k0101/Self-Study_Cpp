#include<iostream>

main()
{
    int i; //ローカル変数はブロックの先頭で宣言

    std::cout << "Enter number: ";
    std::cin >> i;

    //再帰の計算
    int j, fact=1; // 変数を実行分の後に宣言

    for(j=i; j>=1; j--)
        fact = fact * j;
    
    std::cout << "Factorial is " << fact;
    return 0;
}