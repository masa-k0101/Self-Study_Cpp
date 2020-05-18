#include<iostream>

namespace A
{
    class box
    {
        private:
            double x,y,z;
            double v;
        public:
            box(double a, double b, double c);
            double store();
            void vol();
    };

    box::box(double a, double b, double c)
    {
        x = a;
        y = b;
        z = c;
    }

    double box::store()
    {
        return v = x*y*z;
    }

    void box::vol()
    {
        std::cout << "Calicurate result of Box volume:" << store() << "\n";
    }
}

main()
{
    double i,j,k;

    std::cout << "Enter three length of box: ";
    std::cin >> i >> j >>k;

    A::box ob(i,j,k);
    ob.store();
    ob.vol();
    return 0;
}