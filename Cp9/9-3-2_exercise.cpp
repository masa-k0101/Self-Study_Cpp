// Output account info to a life using an inserter
#include<iostream>
#include<fstream>
#include<cstring>

namespace A
{
    class account
    {
            int custom;
            char name[80];
            double balance;
        public:
            account(int c, char *n, double b)
            {
                custom = c;
                strcpy(name, n);
                balance = b;
            }
            friend std::ostream &operator<<(std::ostream &stream, account ob);
    };

    std::ostream &operator<<(std::ostream &stream, account ob)
    {
        stream << ob.custom << ' ';
        stream << ob.name << ' ' << ob.balance;
        stream << '\n';

        return stream;
    }
}

main()
{
    A::account Rex(1011, "Ralph Rex", 12323.34);
    std::ofstream out("accounts");

    out << Rex;
    out.close();

    return 0;
}