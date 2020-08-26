// この例は仮想関数が実行時に起こるランダムなイベントに対応するために
// つかうことができる様子を示している

#include<iostream>
#include<stdlib.h>

class base
{
    public:
        int i;
        base(int x)    { i = x; }
        virtual void func()
        {
            std::cout << "Using base version of func(): " ;
            std::cout << i << '\n';
        }
};

class derived1 : public base
{
    public:
        derived1(int x) : base(x)    {  }
        void func()
        {
            std::cout << "Using derived1's version of func(): ";
            std::cout << i*i << '\n';
        }
};

class derived2 : public base
{
    public:
        derived2(int x) : base(x)   {  }
        void func()
        {
            std::cout << "Using derived2's version of func(): ";
            std::cout << i+i << '\n';
        }
};

main()
{
    base *p;
    derived1 d_ob1(10);
    derived2 d_ob2(10);
    int i, j;

    for(i=0; i<10; i++)
    {
        j = rand();
        if((j%2))   p = &d_ob1;     // 基数ならd_ob1を使う
        else        p = &d_ob2;     // 偶数ならd_ob2を使う
        p->func();                  // 適当な関数をコール
    }

    return 0;
}