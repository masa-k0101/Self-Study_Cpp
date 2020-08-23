// 派生クラスへのポインタの例
#include<iostream>

class base
{
        int x;
    public:
        void setx(int i)    { x = i; }
        int getx()          { return x; }
};

class derived : public base
{
        int y;
    public:
        void sety(int i)    { y = i; }
        int gety()          { return y; }        
};

main()
{
    base *p;        // base型へのポインタ
    base b_ob;      // baseのオブジェクト
    derived d_ob;   // 派生のオブジェクト

    // baseオブジェクトへアクセスするためにpを使う
    p = &b_ob;
    p->setx(10);    // baseオブジェクトにアクセス
    std::cout << "Base object x: " << p->getx() << '\n';

    // 派生オブジェクトにアクセスするためにpを使う
    p = &d_ob;      // 派生オブジェクトを指す
    p->setx(99);    // 派生オブジェクトにアクセス

    // pが使えないので、直接的にyをセット
    d_ob.sety(88);
    std::cout << "Derived object x: " << p->getx() << ' ';
    std::cout << "Derived object y: " << d_ob.gety() << '\n';

    return 0;
}