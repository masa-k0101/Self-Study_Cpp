#include<iostream>

namespace A
{
    class myclass
    {
            int who;
        public:
            myclass(int n)
            {
                who = n;
                std::cout << "Constructing " << who << "\n";
            }
            ~myclass()
            {
                std::cout << "Destructing " << who << "\n";
            }
            int id()    { return who; }
    };

    // oは値で渡される
    void f(myclass &o)
    {
        std::cout << "Recieved " << o.id() << "\n";
    }
}

main()
{
    A::myclass x(1);

    f(x);

    return 0;
}