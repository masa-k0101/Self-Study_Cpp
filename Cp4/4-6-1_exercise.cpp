#include<iostream>

namespace A
{
    void neg(int &n)
    {
        // 次の文に*は不要
        n = -n;   // 100をnが指す引数に入れる
    }
}

main()
{
    int i = 3;

    A::neg(i);

    std::cout << "Here is i's new value: " << i <<"\n";
    return 0;
}