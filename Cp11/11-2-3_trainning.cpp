// 配列ベースI/Oでのeof()の動作の例
// 配列ベースI/OはバイナリI/O関数とも動作する

#include<iostream>
#include<strstream>

main()
{
    char buf[] = "Hello 100 123.125 a";

    std::istrstream istr(buf);

    char c;

    while(!istr.eof())
    {
        istr.get(c);
        std::cout << c;
    }

    return 0;
}