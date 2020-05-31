// newとdeleteの簡単な例
#include<iostream>

main()
{
    double *pd;

    pd = new double(-123.0987);

    // 常に割り当ての成功を確かめる
    if(!pd)
    {
        std::cout << "Allocation error for double\n";
        return 1;
    }

    std::cout << "Here is integer at p: " << *pd << "\n";

    //メモリ解放
    delete pd;

    return 0;
}