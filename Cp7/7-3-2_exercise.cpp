#include<iostream>

namespace A
{
    // vehicleの各種の型のための基本クラス
    class vehilce
    {
            int num_wheels;
            int range;
        public:
            vehicle(int w, int r)
            {
                num_wheels = w;
                range = r;
            }
            void showv()
            {
                std::cout << "Wheels: " << num_wheels << "\n";
                std::cout << "Range: " << range << "\n";
            }
    };

    class car : public vehicle
    {
            int passenger;
        public:
            car(int p, int w, int r) : vehicle(w, r)
            {
                passenger = p;
            }
            void showc()
            {
                showv();
                std::cout << "Passenger: " << passenger << '\n';
            }
    };

    class truck : public vehicle
    {
            int loadlimit;
        public:
            truck(int l, int w, int r) : vehicle(w, r)
            {
                loadlimit = l;
            }
            void showt()
            {
                showv();
                std::cout << "loadlimit: " << loadlimit << '\n';
            }
    };
}

main()
{
    A::car c(5, 4, 500);
    A::truck t(30000, 12, 1200);
    
    std::cout << "Car: \n";
    c.showc();
    std::cout << "Truck: \n";
    t.showt();

    return 0;
}