// インターフェースを定義するために仮想関数を使う

#include<iostream>

class num
{
    public:
        int i;
        num(int x)      { i = x; }
        virtual void shownum()      { std::cout << i << '\n'; }
};

class outhex : public num
{
    public:
        outhex(int n)   : num(n)    {}
        void shownum()  { std::cout << std::hex << i << '\n'; }
};

class outoct : public num
{
    public:
        outoct(int n)   : num(n)    {}
        void shownum()  { std::cout << std::oct << i << '\n'; }
};

main()
{
    outoct  o(10);
    outhex  h(20);

    o.shownum();
    h.shownum();
    
    return 0;
}