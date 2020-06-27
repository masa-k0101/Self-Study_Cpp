#include <iostream>
#include <sstream>
 
void print(const char* textNum, double num)
{
    std::cout << "The number " << textNum << " in fixed:      " << std::fixed << num << '\n'
              << "The number " << textNum << " in scientific: " << std::scientific << num << '\n'
              << "The number " << textNum << " in hexfloat:   " << std::hexfloat << num << '\n'
              << "The number " << textNum << " in default:    " << std::defaultfloat << num << '\n';
}
 
int main()
{
    print("0.01   ", 0.01);
    print("0.00001", 0.00001);
    double f;
    std::istringstream("0x1P-1022") >> std::hexfloat >> f;
    std::cout << "Parsing 0x1P-1022 as hex gives " << f << '\n';
}