// vehicle階層の変形
// しかし、このプログラムにはエラーがあるので修正せよ
#include<iostream>

namespace A
{
    // 各種の型に対するvehicleの基本クラス
    class vehicle
    {
            int num_wheels;
            int range;
        public:
            vehicle(int w, int r)
            {
                num_wheels = w; range = r;
            }
            void showv()
            {
                std::cout << "Wheels: " << num_wheels << "\n";
                std::cout << "Range: " << range << "\n";
            }
    };

    enum motor { gas, electric, diesel };

    class motorized : public vehicle
    {
            enum motor mtr;
        public:
            motorized(enum motor m, int w, int r) : vehicle(w, r)
            {
                mtr = m;
            }
            void showm()
            {
                std::cout << "Motor: ";
                switch (mtr)
                {
                case gas : std::cout << "Gas\n";
                    break;
                case electric : std::cout << "Electric\n";
                    break;
                case diesel : std::cout << "Diesel\n";
                    break;
                }
            }
    };

    class road_use : public vehicle
    {
            int passengers;
        public:
            road_use(int p, int w, int r) : vehicle(w, r)
            {
                passengers = p;
            }
            void showr()
            {
                std::cout << "Passengers: " << passengers << "\n";
            }
    };

    enum steering { power, rack_pinion, manual };

    class car : public motorized, public road_use
    {
            enum steering strng;
        public:
            car(enum steering s, enum motor m, int w, int r, int p ) : 
            road_use(p, w, r), motorized(m, w, r), vehicle(w, r)
            {
                strng = s;
            }
            void show()
            {
                showv();
                showr();
                showm();
                std::cout << "Steering: ";
                switch (strng)
                {
                case power : std::cout << "Power\n";
                    break;
                case rack_pinion : std::cout << "Rack and Pinion\n";
                    break;
                case manual : std::cout << "Manual\n";
                    break;
                }
            }
    };
}

main()
{
    A::car c(power, gas, 4, 500, 5);

    c.show();

    return 0;
}