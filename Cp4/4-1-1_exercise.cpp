// 配列の初期化
#include<iostream>

namespace A
{
    class letters
    {
            char ch;
        public:
            letters(char c)   { ch = c; }
            char get_ch()     { return ch; }
    };
}

main()
{
    A::letters ob[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int i;

    for(i=0; i<10; i++)  std::cout << ob[i].get_ch() << ' ';
    std::cout << "\n";

    return 0;
}