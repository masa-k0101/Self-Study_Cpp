// 配列の初期化
#include<iostream>

namespace A
{
    class letters
    {
            char ch;
        public:
            letters(char c);
            char get_ch()     { return ch; }
    };

    letters::letters(char c)
    {
        ch = c;
    };
}

main()
{
    A::letters ob[10] =
    {
        A::letters('A'), A::letters('B'), A::letters('C'), 
        A::letters('D'), A::letters('E'), A::letters('F'),
        A::letters('G'), A::letters('H'), A::letters('I'),
        A::letters('J')
    };
    int i;

    for(i=0; i<10; i++)  std::cout << ob[i].get_ch() << ' ';
    std::cout << "\n";

    return 0;
}