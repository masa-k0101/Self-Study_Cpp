#include<iostream>

namespace A
{
    class truck;    //前方参照

    class car
    {
            int passengers;
            int speed;
        public:
            car(int p, int s)   { passengers = p; speed = s; }
            friend int sp_greater(car c, truck t);
    };

    class truck
    {
            int weight;
            int speed;
        public:
            truck(int w, int s)   { weight = w; speed = s; }
            friend int sp_greater(car c, truck t);
    };

    // carがtruckより速ければ正の値を返し、速度が同じならば0を返す
    // truckがcarより速ければ負の値を返す
    int sp_greater(car c, truck t)
    {
        return c.speed-t.speed;
    }
}

main()
{
    int t;
    A::car c1(6, 55), c2(2, 120);
    A::truck t1(10000, 55), t2(20000, 72);

    std::cout << "Comparing c1 and t1\n";
    t = sp_greater(c1, t1);
    if(t<0)         std::cout << "Truck is faster.\n";
    else if(t==0)   std::cout << "Car and truck speed is same.\n";
    else            std::cout << "Car is faster. \n";

    std::cout << "Comparing c2 and t2\n";
    t = sp_greater(c2, t2);
    if(t<0)         std::cout << "Truck is faster.\n";
    else if(t==0)   std::cout << "Car and truck speed is same.\n";
    else            std::cout << "Car is faster. \n";

    return 0;
}