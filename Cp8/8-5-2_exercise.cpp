#include<iostream>

namespace A
{
    class planet
    {
        protected:
            double distance;    // 太陽からのマイル
            int resolve;        // 日数
        public:
            planet(double d, int r)     { distance = d; resolve = r; }
    };

    class earth : public planet
    {
            double circumference;     // 軌道の円周
        public:
            earth(double d, int r) : planet(d, r)
            {
                circumference = 2*distance*3.1416;
            }
            friend std::ostream &operator<<(std::ostream &stream, earth ob);
    };

    // 演算子インサータ関数を作って、情報を表示する
    std::ostream &operator<<(std::ostream &stream, earth ob)
    {
        stream << "Distance from sun: " << ob.distance << '\n';
        stream << "Day in orbit: " << ob.resolve << '\n';
        stream << "Circunference of orbit: " << ob.circumference << '\n';
        
        return stream;
    }
}

main()
{
    A::earth ob(93000000, 365);

    std::cout << ob;

    return 0;
}