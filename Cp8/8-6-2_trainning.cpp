#include<iostream>
#include<cstring>

namespace A
{
    class inventory
    {
            char item[40];          // 品名
            int onhand;             // 在庫数
            double cost;            // 価格
        public:
            inventory(char *i, int o, double c)
            {
                strcpy(item, i);
                onhand = o;
                cost = c;
            }
            friend std::ostream &operator<<(std::ostream &stream, inventory ob);
            friend std::istream &operator>>(std::istream &stream, inventory &ab);
    };

    std::ostream &operator<<(std::ostream &stream, inventory ob)
    {
        stream << ob.item << ": " << ob.onhand;
        stream << " on hand at $" << ob.cost << '\n';

        return stream;
    }

    std::istream &operator>>(std::istream &stream, inventory &ob)
    {
        std::cout << "Enter item name: ";
        stream >> ob.item;
        std::cout << "Enter number on hand: ";
        stream >> ob.onhand;
        std::cout << "Enter cost: ";
        stream >> ob.cost;

        return stream;
    }
}

main()
{
    A::inventory ob("hammer", 4, 12.55);

    std::cout << ob;
    
    std::cin >> ob;
   
    std::cout << ob;

    return 0;
}