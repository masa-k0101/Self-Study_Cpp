#include<iostream>

namespace A
{
    class squares
    {
            int num, sqr;
        public:
            squares(int a, int b)   { num = a; sqr = b; }
            void show()             { std::cout << num << ' ' << sqr << "\n"; }
    };
}

main()
{
    A::squares ob[10] =
    {
        A::squares(1, 1), A::squares(2, 4), A::squares(3, 9),
        A::squares(4, 16), A::squares(5, 25), A::squares(6, 36), 
        A::squares(7, 49), A::squares(8, 64),
        A::squares(9, 81), A::squares(10, 100)
    };
    int i;

    for(i=0; i<10; i++)
        {
            ob[i].show();
        }
    return 0;
}