//vオブジェクトは、ほかのパラメータ同様、値で渡される
//そのために、関数内でのパラメータ変更はコールに使われたオブジェクトに影響しない

#include<iostream>

namespace A
{
    class samp
    {
            int i;
        public:
            samp(int n) { i = n; }
            void set_i(int n) { i = n; }
            int get_i() { return i; }
    };

    //o.iの平方にセット、しかし、sqr_it()には影響しない
    void sqr_it(samp o)
    {
        o.set_i(o.get_i() * o.get_i());

        std::cout << "Copy of a has i value of " << o.get_i() << "\n";
    }
}

main()
{
    A::samp a(10);
    sqr_it(a);  //aは値で渡される

    std::cout << "But a.i is unchanged in main: "<< a.get_i() << "\n";
    return 0;
}