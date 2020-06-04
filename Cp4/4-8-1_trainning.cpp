// 参照を返す関数の簡単な例
#include<iostream>

namespace A
{
    int &f();
    int x;

    int &f()
    {
        return x;
    }
}

main()
{
    A::f() = 100;

    std::cout << A::x <<"\n";
    return 0;
}