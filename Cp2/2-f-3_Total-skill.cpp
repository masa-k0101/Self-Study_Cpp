#include<iostream>
#include<time.h>
#include<cstdlib>

namespace A
{
    class dice
    {
        private:
            int i;
        public:
            void roll();
    };

    void dice::roll()
    {
        srand(time(NULL));
        i = (rand() %6);
        std::cout << "Result of Dice: " << i << "\n";
    }
}

main()
{
    A::dice ob1;
    ob1.roll();
    return 0;
}