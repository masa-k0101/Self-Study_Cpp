// このプログラムにはエラーがある
#include<iostream>

namespace A
{
    class base
    {
        public:
            int i;
    };

    // 仮想としてbaseを継承
    class derived1 : public base
    {
        public:
            int j;
    };

    // ここでもまだ仮想としてbaseを継承
    class derived2 : public base
    {
        public:
            int k;
    };

    // ここでderived3はderived1とderived2の両方を継承
    // しかしbaseクラスのコピーはただ1つ
    class derived3 : public derived1, public derived2
    {
        public:
            int product()   { return i * j * k; }  
    };
}

main()
{
    A::derived3 ob;

    ob.i = 10;  // コピーは１つだけなのであいまい
    ob.j = 3;
    ob.k = 5;

    std::cout << "Product is " << ob.product() << "\n";

    return 0;
}