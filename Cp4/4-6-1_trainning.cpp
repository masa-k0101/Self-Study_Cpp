#include<iostream>

namespace A
{
    void swap(int &x, int &y)
    {
        int t;

        t = x;
        x = y;
        y = t;
    }
}

main()
{
    int i, j;

    i = 10;
    j = 19;

    std::cout << "i: " << i << ", ";
    std::cout << "j: " << j << "\n";

    A::swap(i, j);

    std::cout << "After swapping: ";
    std::cout << "i: " << i << ", ";
    std::cout << "j: " << j << "\n";

    return 0;
}