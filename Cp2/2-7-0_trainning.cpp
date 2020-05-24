#include<iostream>

namespace A
{
    class samp
    {
            int i,j;
        public:
            samp(int a, int b);

            // divisible()はここで定義され自動的にインライン化される
            int divisible()
            {
                return  !(i%j);
            }
    };

    samp::samp(int a, int b)
    {
        i = a;
        j = b;
    }
}

main()
{
    A::samp ob1(10, 2), ob2(10, 3);

    //これは真
    if(ob1.divisible())     std::cout << "10 divisblae by 2\n";
    //これは偽
    if(ob2.divisible())     std::cout << "10 divisblae by 3\n";
    return 0;
}