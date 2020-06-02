#include<iostream>

namespace A
{
    void f(int &n)
    {
        // 次の文に*は不要
        n = 100;   // 100をnが指す引数に入れる
    }
}

main()
{
    int i = 0;

    A::f(i);

    std::cout << "Here is i's new value: " << i <<"\n";
    return 0;
}