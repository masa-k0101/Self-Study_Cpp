#include<iostream>

namespace A
{
    class B1
    {
        public:
            B1()    { std::cout << "Constructing B1\n"; }
            ~B1()   { std::cout << "Destructing B1\n"; }
    };

    class B2
    {       
            int b;
        public:
            B2()    { std::cout << "Constructing B2\n"; }
            ~B2()   { std::cout << "Destructing B2\n"; }
    };
    
    // 2つの基本クラスを継承する
    class D : public B1, public B2
    {
        public:
            D()     { std::cout << "Constructing D\n"; }
            ~D()    { std::cout << "Destructing D\n"; }
    };
}

main()
{
    A::D ob;

    return 0;
}