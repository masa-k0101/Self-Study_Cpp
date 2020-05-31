// 動的変数初期化の例
#include<iostream>

main()
{
    int *p;

    p = new int (9);    // 初期値9を与える

    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    std::cout << "Here is interger at p: " << *p << "\n";

    delete p;           //メモリ解放
    return 0;
}