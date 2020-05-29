// thisポインタの例
#include<iostream>
#include<cstring>

namespace A
{
    class inventory
    {
        private:
            char item[20];
            double cost;
            int on_hand;
        public:
            inventory(const char *i, double c, int o)
            {
                strcpy(this -> item, i);    //thisポインタを
                this -> cost = c;           //使って
                this -> on_hand = o;        //メンバにアクセスする
            }
            void show();
    };

    void inventory::show()
    {
        std::cout << this -> item;          //thisを使ってメンバにアクセスする
        std::cout << ": $" << this -> cost;
        std::cout << " On hand: " << this -> on_hand << "\n"; 
    }
}

main()
{
    A::inventory ob("wrentch", 4.95, 4);

    ob.show();
    return 0;
}