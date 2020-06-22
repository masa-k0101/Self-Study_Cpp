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
        public:
            derived()   { std::cout << "Constructing derived class \n"; }
            ~derived()  { std::cout << "Destructing derived class \n"; }
    };
}

main()
{
    A::derived o;
    
    return 0;
}