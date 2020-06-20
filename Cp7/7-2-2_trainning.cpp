#include<iostream>

namespace A
{
    class base
    {
        protected:      //baseに対しプライベートのまま
            int a, b;   // derivedクラスからはアクセス可能
        public:
            void setab(int n, int m)  { a = n; b = m; }
    };

    class derived : public base
    {
            int c;
        public:
            void setc(int n)        { c = n; }
        
        // この関数はbaseからaとbにアクセスする
        void showabs()
        {
            std::cout << a << ' ' << b << ' ' << c << '\n';
        }
    };
}

main()
{
    A::derived ob;

    // *aとbはここでアクセスできないが、それはbaseとderivedの両方に対しプライベートのため

    ob.setab(1, 2);
    ob.setc(3);

    ob.showabs();

    return 0;
}