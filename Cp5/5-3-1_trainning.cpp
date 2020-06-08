// デフォルト引数の簡単な例
#include<iostream>

namespace A
{
    void f(int a=0, int b=0)
    {
        std::cout << "a: " << a << ", b: " << b << "\n";
    }
}

main()
{
    A::f();
    A::f(10);
    A::f(10, 99);

    return 0;
}