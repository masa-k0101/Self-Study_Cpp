#include<iostream>

namespace A
{
    class base
    {
            int i;
        public:
            base(int n)
            {
                std::cout << "Constructing base class \n";
                i = n;
            }
            ~base()         { std::cout << "Destructing base class \n"; }
            void showi()    { std::cout << i << '\n'; }
    };

    class derived : public base
    {
            int j;
        public:
            derived(int n) : base(n)    // baseクラスに引数を渡す
            {
                 std::cout << "Constructing derived class \n";
                 j = n; 
            }
            ~derived()      { std::cout << "Destructing derived class \n"; }
            void showj()    { std::cout << j << '\n'; }
    };
}

main()
{
    A::derived o(10);
    
    o.showi();
    o.showj();

    return 0;
}