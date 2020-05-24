#include<iostream>

namespace A
{
    class transfer
    {
        private:
            double feet,inch;
            double l;
        public:
            transfer(const char *s)
            {
                std::cout << s;
                std::cin >> feet;
                inch = feet*12;
            }
            ~transfer();
    };

    transfer::~transfer()
    {
        std::cout << "Imput longness is " << inch << " inch \n";
    }
}

main()
{
    A::transfer ob("Please imput how feet?");     
    return 0;
}
