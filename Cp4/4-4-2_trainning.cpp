// 動的なオブジェクトの割り当て
#include<iostream>

namespace A
{
    class samp
    {
        int i, j;
        public:
            void set_ij(int a, int b)    { i =a; j = b; }
            int get_product()           { return i*j; }
    };
}

main()
{
    A::samp *p;

    p = new A::samp;    // 整数の場所の割り当て

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    p -> set_ij(4, 5);

    std::cout << "Here is integer at p: " << p -> get_product() << "\n";

    delete p;       //メモリ解放
    return 0;
}