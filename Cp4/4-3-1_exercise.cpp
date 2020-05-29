#include<iostream>

namespace A
{
    class myclass
    {
        int a, b;
        public:
            myclass(int n, int m)   { this -> a = n; this -> b = m; }
            int add()               { return a+b; }
            void show();
    };

    void myclass::show()
    {
        int t;

        t = add();      //メンバ関数をコール
        std::cout << this -> add() << "\n";
    }
}

main()
{
    A::myclass ob(10, 14);

    ob.show();
    return 0;
}
