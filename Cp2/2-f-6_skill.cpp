#include<iostream>

namespace A
{
    class myclass
    {
            int i, j;
        public:
            myclass(int x, int y)
            {
                i = x;
                j = y;
            }
            void show()
            {
                std::cout << i << " " << j << "\n";
            }
    };
}

main()
{
    A::myclass c(2,3);
    c.show();
    return 0;
}