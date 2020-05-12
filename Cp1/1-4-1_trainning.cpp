#include<iostream>

class myclass
    {
    // mycalss内でのプライベート
        int a;
    public:
        void set_a(int num);
        int get_a();
    };

    void myclass::set_a(int num)
    {
        a = num;
    }
    int myclass::get_a()
    {
        return a;
    }

main()
{
    myclass ob1, ob2;

    ob1.set_a(10);
    ob2.set_a(99);

    std::cout << ob1.get_a() << "\n";
    std::cout << ob2.get_a() << "\n";

    return 0;
}