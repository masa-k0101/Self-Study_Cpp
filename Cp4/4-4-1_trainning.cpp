// newとdeleteの簡単な例
#include<iostream>

main()
{
    int *p;

    p = new int;    // 整数の場所の割り当て

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    *p = 1000;

    std::cout << "Here is integer at p: " << *p << "\n";

    delete p;       //メモリ解放
    return 0;
}