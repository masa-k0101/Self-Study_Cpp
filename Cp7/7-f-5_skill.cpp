#include<iostream>

namespace A
{
    class planet
    {
        protected:
            double distance;        // 太陽からマイル数
            int resolve;            // 日数
        public:
            planet(double d, int r)
            {
                distance = d; resolve = r;
            }
    };

    class earth : public planet
    {
            double circumference;       // 軌道の円周
        public:
            // 距離と公転日数をplanetに返し、軌道の円周を算出する
            earth(double d, int r) : planet(d, r)
            {
                circumference = 2*d*3.141592;
            }
            void show()
            {
                std::cout << "Circumference: " << circumference << "\n";
            }
    };
}

main()
{
    A::earth ob(93000000, 365);

    ob.show();

    return 0;
}