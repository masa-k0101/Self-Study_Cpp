#include<iostream>

class distance
{
    public:
        double  d;
        distance(double f)  { d = f; }
        virtual void trav_time()
        {
            std::cout << "Travel time at 60 mph";
            std::cout << d / 60 << '\n';
        }
};

class metric : public distance
{
    public:
        metric(double f)   : distance(f)    {}
        void trav_time()
        {
            std::cout << "Travel time at 100 mph";
            std::cout << d / 100 << '\n';
        }
};

main()
{
    distance *p, mph(88.0);
    metric  kph(88);

    p = &mph;
    p->trav_time();

    p = &kph;
    p->trav_time();

    return 0;
}