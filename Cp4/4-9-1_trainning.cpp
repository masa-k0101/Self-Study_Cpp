#include<iostream>

main()
{
    int x;
    int &ref = x;   //独立参照を作る

    x = 10;         //次の2つの文は
    ref = 10;       //機能的に等価

    ref = 100;

    //数100を2回印刷
    std::cout << x << ' ' << ref << "\n";

    return 0;
}