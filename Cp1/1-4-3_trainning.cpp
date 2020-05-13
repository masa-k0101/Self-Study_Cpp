#include<iostream>

namespace A
{
    class myclass
        {
            public:
            // ここではaはパブリック
                int a;
            // それでset_()やget_()は不要
        };
}

main()
{
    A::myclass ob1, ob2;
    // ここで、aは直接アクセスされている
    ob1.a = 10;
    ob2.a= 99;

    std::cout << ob1.a << "\n";
    std::cout << ob2.a << "\n";

    return 0;
}