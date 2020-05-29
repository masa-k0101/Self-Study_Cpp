// newとdeleteの簡単な例
#include<iostream>

main()
{
    float *p;
    double *pd;
    char *pc;

    p = new float;
    pd = new double;
    pc = new char;

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error for float\n";
        return 1;
    }
    if(!pd)
    {
        std::cout << "Allocation error for double\n";
        return 1;
    }
        if(!pc)
    {
        std::cout << "Allocation error for char\n";
        return 1;
    }

    *p = 10.02;
    *pd = 1000;
    *pc = 'S';

    std::cout << "Here is integer at p: " << *p << "\n";
    std::cout << "Here is integer at p: " << *pd << "\n";
    std::cout << "Here is integer at p: " << *pc << "\n";

    delete p;       //メモリ解放
    delete pd;
    delete pc;

    return 0;
}