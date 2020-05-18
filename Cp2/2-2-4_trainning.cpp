#include<iostream>

namespace A
{
    class myclass
    {
        private:
            int i,j;
        public:
            myclass(int a, int b);
            void show();
    };

    myclass::myclass(int a, int b)
    {
        i = a;
        j = b;
    }

    void myclass::show()
    {
        std::cout << i << ' ' << j << "\n";
    }
}

main()
{
    int x,y;

    std::cout << "Enter two interger: ";
    std::cin >> x >> y;

    //obを作るため変数を使う
    A::myclass ob(x,y);
    ob.show();
    return 0;
}