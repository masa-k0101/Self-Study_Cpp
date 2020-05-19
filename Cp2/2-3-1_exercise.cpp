#include<iostream>

namespace A
{
    class area_cl
    {
        private:
        public:
            double height, width;
    };

    class box : public area_cl
    {
        public:
            box(double h, double w);
            double area();
    };

    class isosceles : public area_cl
    {
        public:
            isosceles(double h, double w);
            double area();
    };

    box::box(double h, double w)
    {
        height = h;
        width = w;
    };

    isosceles::isosceles(double h, double w)
    {
        height = h;
        width = w;
    };

    double box::area()
    {
        return height*width;
    };

    double isosceles::area()
    {
        return height*width/2;
    };
}

main()
{
    A::box b(10,10);
    A::isosceles i(10,10);

    std::cout << "Area of Box = " << b.area() <<"\n";
    std::cout << "Area of Isosceles = " << i.area() << "\n";
    return 0;
}