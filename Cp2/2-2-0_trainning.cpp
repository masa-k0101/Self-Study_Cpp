#include<iostream>

namespace A
{
    class myclass
    {
        private:
            int a;
        public:
            myclass(int x);
            void show();
    };

    myclass::myclass(int x)
    {
        std::cout << "In constructor \n";
        a = x;
    }

    void myclass::show()
    {
        std::cout << a << "\n";
    }
}

main()
{
    A::myclass ob(4);
    ob.show();
    return 0;
}
