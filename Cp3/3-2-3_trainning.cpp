//ここでオブジェクトのアドレスが、sqr_it()に渡される
//関数はコールの際に使われるアドレスを持っている引数の値を変更する可能性がある

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
    void sqr_it(samp *o)
    {
        o->set_i(o->get_i() * o->get_i());

        std::cout << "Copy of a has i value of " << o->get_i() << "\n";
    }
}

main()
{
    A::samp a(10);
    sqr_it(&a);  //aのアドレスをsqr_it()に渡す

    std::cout << "Now, a in main() has been changed: "<< a.get_i() << "\n";
    return 0;
}