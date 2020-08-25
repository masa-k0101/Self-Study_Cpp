// 仮想関数は階層的
#include<iostream>

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
};

main()
{
    base *p;
    base ob(10);
    derived1 d_ob1(10);
    derived2 d_ob2(10);

    p = &ob;
    p->func();      // baseのfunc()を使う

    // 派生オブジェクトにアクセスするためにpを使う
    p = &d_ob1;
    p->func();      // derived1のfunc()を使う

    p = &d_ob2;
    p->func();      // baseのfunc()を使う

    return 0;
}