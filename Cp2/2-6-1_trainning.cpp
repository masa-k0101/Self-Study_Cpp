// メンバ関数をインラインにする例
#include<iostream>

namespace A
{
    class samp
    {
        private:
            int i,j;
        public:
            samp(int a, int b);
            int divisible();    //定義でインライン化される
    };

    samp::samp(int a, int b)
    {
        i = a;
        j = b;
    }

    //iがjで割り切れるときは1を返す、このメンバ関数はインラインに展開される
    inline int samp::divisible()
    {
        return !(i%j);
    }
}

main()
{
    A::samp ob1(10, 2), ob2(10, 3);
    
    //これは真
    if(ob1.divisible())     std::cout << "10 divisible by 2\n";
    if(ob2.divisible())     std::cout << "10 divisible by 3\n";
    return 0;
}