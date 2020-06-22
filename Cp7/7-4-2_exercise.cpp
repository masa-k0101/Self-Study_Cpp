#include<iostream>

namespace Area
{
    class A
    {
            int i;
        public:
            A(int a)    { i = a; }
    };

    class B
    {       
            int j;
        public:
            B(int a)   { j = a; }
    };
    
    class C : public A, public B
    {
            int k;
        public:
           // ここで、zとyは直接AとBに渡される
            C(int a, int b, int c) : A(c), B(b)
            {
                k = a;
            }
    };
}

main()
{
    Area::C ob(4, 5, 6);

    return 0;
}