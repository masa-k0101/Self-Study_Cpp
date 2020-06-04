#include<iostream>
#include<cstring>
#include<cstdlib>

namespace A
{
    class string
    {
            char *p;
        public:
            string(const char *s);
            ~string()           { delete p; }
            char *get()         { return p; }
    };

    string::string(const char *s)
    {
        int l;

        l = strlen(s);

        p = new char [l];
        if(!p)
        {
            std::cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, s);
    }

    void show(string &x)
    {
        char *s;

        s = x.get();
        std::cout << s << "\n";
    }
}

main()
{
    A::string a("Hello"), b("There");
    
    show(a);
    show(b);

    return 0;
}