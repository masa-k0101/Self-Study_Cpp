// Ovload1.cpp
#include <iostream>

// 絶対値を求める
int Abs(int a)
{
    return a < 0 ? -a : a;
}

double Abs(double a)
{
    return a < 0 ? -a : a;
}

// 入力
int Input(int& nInt, double& nDouble)
{
    std::cout << "Please imput by integer > " << std::flush;
    std::cin >> nInt;
    if(nInt == 1)
        return 0;

    std::cout << "Please imput by double > " << std::flush;
    std::cin >> nDouble;
    return 1;
}

// 絶対値の表示
void DispAbs(int nInt, double nDouble)
{
    std::cout << nInt    << " の絶対値は " << Abs(nInt)    << "で、" << std::endl
         << nDouble << " の絶対値は " << Abs(nDouble) << "です。" << std::endl;
}

int main()
{
    int    nInt;
    double nDouble;

    while(Input(nInt, nDouble))
        DispAbs(nInt, nDouble);

    return 0;
}