// 動的なオブジェクトの割り当て
#include<iostream>

namespace A
{
    class samp
    {
        int i, j;
        public:
            void set_ij(int a, int b)   { i = a; j = b; }
            ~samp()                     { std::cout << "Destructing...\n"; }
            int get_product()           { return i*j; }
    };
}

main()
{
    A::samp *p;
    int i;

    p = new A::samp [10];    // オブジェクト配列の割り当て

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    for(i=0; i<10; i++)     p[i].set_ij(i, i); 

    for(i=0; i<10; i++)
    {   
        std::cout << "Product [" << i << "] is: ";
        std::cout << p[i].get_product() << "\n";
    }
    delete [] p;       //メモリ解放
    return 0;
}