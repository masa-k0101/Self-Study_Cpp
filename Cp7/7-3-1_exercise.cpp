#include<iostream>
#include<cstring>

namespace A
{
    class mybase
    {
            char str[80];
        public:
            mybase(const char *s)
            {
                strcpy(str, s);
            }
            char *get()     { return str; }
    };

    class myderived : public mybase
    {
            int len;
        public:
            myderived(const char *s) : mybase(s)
            {
                 len = strlen(s);
            }
            int getlen()    { return len; }
            void show()     { std::cout << get() << '\n'; }
    };
}

main()
{
    A::myderived ob("Hello");
    
    ob.show();
    std::cout << ob.getlen() << "\n";

    return 0;
}