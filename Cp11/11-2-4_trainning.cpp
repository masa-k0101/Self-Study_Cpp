// 入出力配列の礼

#include<iostream>
#include<strstream>

main()
{
    char iobuf[255];

    std::strstream iostr(iobuf, sizeof iobuf, std::ios::in | std::ios::out);

    iostr << "This is a test\n";
    iostr << 100 << std::hex << 100 << std::ends;

    char str[80];
    int i;

    iostr.getline(str, 79);     // 文字列を\nまで読み出す
    iostr >> i;                 // 100を読み出す

    std::cout << str << ' ' << i << ' ';

    iostr >> i;
    std::cout << i;

    return 0;
}