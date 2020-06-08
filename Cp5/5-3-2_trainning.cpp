// オーバーロード関数を使った長方形の面積の計算
#include<iostream>

namespace A
{
    // 長方形の面積を返す
    double box_area(double length, double width)
    {
        return length*width;
    }

    // 真四角の長方形の面積を返す
    double box_area(double length)
    {
        return length*length;
    }
}

main()
{
    std::cout << "10 x 5.8 box has area: ";
    std::cout << A::box_area(10.0, 5.8) << "\n";

    std::cout << "10 x 10 box has area: ";
    std::cout << A::box_area(10.0) << "\n";

    return 0;
}