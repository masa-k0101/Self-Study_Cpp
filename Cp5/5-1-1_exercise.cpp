#include<iostream>
#include<cstring>
#include<cstdlib>

namespace A
{
    class string
    {
            int len;
            char *p;
        public:
            string();
            string(const char *s, int l);
            char *getstring()   { return p; }
            int getlength()     { return len; }
    };

    string::string()
    {
        p = new char [255];
        if(!p)
        {
            std::cout << "Allocation error1\n";
            exit(1);
        }
        *p = '\0';      //null string
        len = 255;
    }

    string::string(const char *s, int l)
    {
        if(strlen(s) >= l)
        {
            std::cout << "Allocation too littele memory\n";
            exit(1);
        }

        p = new char [l];
        if(!p)
        {
            std::cout << "Allocation error3\n";
            exit(1);
        }
        strcpy(p, s);
        len = l;
    }
}

main()
{
    A::string s1;
    A::string s2("This is a test", 100);

    std::cout << "s1:" << s1.getstring() << " - Length";
    std::cout << s1.getlength() << "\n";

    std::cout << "s2:" << s2.getstring() << " - Length";
    std::cout << s2.getlength() << "\n";

    return 0;
}