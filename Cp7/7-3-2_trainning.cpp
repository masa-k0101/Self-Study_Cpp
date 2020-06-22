#include<iostream>

namespace A
{
    class base
    {
        public:
            base()  { std::cout << "Constructing base class \n"; }
            ~base() { std::cout << "Destructing base class \n"; }
    };

    class derived : public base
    {
            int j;
        public:
            derived(int n)
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
    
    o.showj();

    return 0;
}