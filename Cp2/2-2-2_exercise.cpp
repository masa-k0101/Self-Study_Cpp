#include<iostream>
#include<time.h>

namespace A
{
    class t_and_d
    {
        private:
            time_t now;
        public:
            t_and_d(time_t t);
            void show();
    };

    t_and_d::t_and_d(time_t t)
    {
        now = t;
    }

    void t_and_d::show()
    {
        std::cout << "System time: " << ctime(&now);
    }
}

main()
{
    time_t x;
    x = time(NULL);

    A::t_and_d ob(x);
    ob.show();
    return 0;
}