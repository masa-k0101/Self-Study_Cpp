#include<iostream>

namespace A
{
    class myclass
    {
        private:
            int a,b;
        public:
            myclass(int x, int y);  //コンストラクタ
            void show();
    };

    myclass::myclass(int x, int y)
    {
        std::cout << "In construtor \n";
        a = x;
        b = y;
    }

    void myclass::show()
    {
        std::cout << a << ' ' << b << "\n";
    }
}

main()
{
    A::myclass ob(4,7);

    ob.show();
    return 0;
}