#include<iostream>

namespace A
{
    class base
    {
            int a;
        public:
            void load_a(int n)  { a = n; }
            int get_a()         { return a; }
    };

    class derived : public base
    {
            int b;
        public:
            void load_b(int n)      { b = n; }
            int get_b()             { return b; }
    };
}

main()
{
    A::derived ob1, ob2;

    ob1.load_a(5);
    ob1.load_b(10);

    ob2 = ob1;

    std::cout << "Here is ob'1 a and b: ";
    std::cout << ob1.get_a() << ' ' << ob1.get_b() << "\n";

    std::cout << "Here is ob'2 a and b: ";
    std::cout << ob2.get_a() << ' ' << ob2.get_b() << "\n";
    return 0;
}