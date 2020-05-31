// newとdeleteの簡単な例
#include<iostream>

main()
{
    int *p;

    p = new int[5];    // 整数の場所の割り当て

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    int i;

    for(i=0; i<5; i++)   p[i] = i;

    for(i=0; i<5; i++)
    {
        std::cout << "Here is integer at p[" << i << "]: ";
        std::cout << p[i]  << "\n";
    }

    delete [] p;       //メモリ解放
    return 0;
}