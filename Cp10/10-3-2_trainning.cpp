// 仮想関数は継承されてもその仮想の性質を残す
#include<iostream>

class base
{
    public:
        virtual void func()
        {
            std::cout << "Using base version of func()\n";
        }
};

class derived1 : public base
{
    public:
        void func()
        {
            std::cout << "Using derived1's version of func()\n";
        }
};

// derived2はderived1を継承
class derived2 : public derived1
{
    public:
        void func()
        {
            std::cout << "Using derived2's version of func()\n";
        }
};

main()
{
    base *p;
    base ob;
    derived1 d_ob1;
    derived2 d_ob2;

    p = &ob;
    p->func();      // baseのfunc()を使う

    p = &d_ob1;
    p->func();      // derived1のfunc()を使う

    p = &d_ob2;
    p->func();      // derived2のfunc()を使う

    return 0;
}