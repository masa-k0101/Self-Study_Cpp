#include<iostream>
#include<cstring>

namespace A
{
    // クラス型の定義に構造体を使う
    struct st_type
    {
        st_type(double b, const char *n);
        void show();
        private:
            double balance;
            char name[40];
    };

    st_type::st_type(double b, const char *n)
    {
        balance = b;
        strcpy(name, n);
    }

    void st_type::show()
    {
        std::cout << "Name: " << name;
        std::cout << " :$" << balance;
        if(balance<0)   std::cout << "***" << "\n";
        else            std::cout << "\n";
    }
}

main()
{
    A::st_type acc1(100.12, "Johnson");
    A::st_type acc2(-12.34, "Hedricks");

    acc1.show();
    acc2.show();
    return 0;
}