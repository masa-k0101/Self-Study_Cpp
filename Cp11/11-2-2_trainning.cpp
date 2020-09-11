// 配列ベース入力を使った例
#include<iostream>
#include<strstream>

main()
{
    char buf[] = "Hello 100 123.125";

    std::istrstream istr(buf);   // 入力配列をオープン

    int i;
    char str[80];
    float f;
    char c;

    istr >> str >> i >> f >> c;
    std::cout << str << ' ' << i << ' ' << f;
    std::cout << ' ' << c << '/n';

    return 0;
}