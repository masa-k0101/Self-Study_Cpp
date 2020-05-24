// このプログラムにはエラーが１つある
#include<iostream>

namespace A
{
    class myclass
    {
            int a, b;
        public:
            void set(int i, int j)
            {
                a = i; b = j;
            }
            void show()
            {
                std::cout << a << ' ' << b << "\n";
            }
    };

    class yourclass
    {
            int a, b;
        public:
            void set(int i, int j)
            {
                a = i; b = j;
            }
            void show()
            {
                std::cout << a << ' ' << b << "\n";
            }
    };
}

main()
{
    A::myclass o1;
    A::yourclass o2;
    o1.set(10, 4);

    o2 = o1;        //エラー　オブジェクトの型を入れる

    o1.show();
    o2.show();
    return 0;
}