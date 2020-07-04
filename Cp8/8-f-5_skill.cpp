#include<iostream>

namespace A
{
    class pwr
    {
            int base;
            int exponent;
            double result;      // べき乗の基数
        public:
            pwr(int b, int e);
            friend std::ostream &operator<<(std::ostream &stream, pwr ob);
            friend std::istream &operator>>(std::istream &stream, pwr &ob);
    };

    pwr::pwr(int b, int e)
    {
        base = b;
        exponent = e;

        result = 1;
        for( ; e; e--)  result = result * base;
    }

    // 演算子インサータ関数を作る
    std::ostream &operator<<(std::ostream &stream, pwr ob)
    {
        stream << ob.base << "^" << ob.exponent;
        stream << " is " << ob.result << '\n';

        return stream;
    }

    std::istream &operator>>(std::istream &stream, pwr &ob)
    {
        int b, e;

        std::cout << "Enter base number: ";
        stream >> b;
        std::cout << "Enter exponent number: ";
        stream >> e;

        pwr temp(b, e);
        ob = temp;

        return stream;
    }
}

main()
{
    A::pwr ob(10, 2);

    std::cout << ob << '\n';

    std::cin >> ob;
    std::cout << ob;

    return 0;
}