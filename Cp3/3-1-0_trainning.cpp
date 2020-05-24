// オブジェクト代入の例
#include<iostream>

namespace A
{
    class myclass
    {
            int a, b;
        public:
            void set(int i, int j)
            {
                a = i;
                b = j;
            }
            void show()
            {
                std::cout << a << ' ' << b << "\n";
            }
    };
}

main()
{
    A::myclass o1, o2;
    o1.set(10, 4);

    //　o1をo2に代入
    o2 = o1;

    o1.show();
    o2.show();
    return 0;
}
