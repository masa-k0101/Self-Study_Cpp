#include<iostream>
#include<cstring>
#include<string>
#include<malloc.h>
#include<cstdlib>

namespace A
{
    class strings
    {
        private:
            char *p;
            int len;
        public:
            strings(const char *ptr);
            ~strings();
            void show();
    };

    strings::strings(const char *ptr)
    {
        len = strlen(ptr);
        p = (char *) malloc(len+1);
        if(!p)
        {
            std::cout << "Allocation error \n";
            exit(1);
        }
        strcpy(p, ptr);
    }

    strings::~strings()
    {
        std::cout << "Freeing p \n";
        free(p);
    }

    void strings::show()
    {
        std::cout << p << " - length:" << len << "\n";
    }
}

main()
{
    A::strings s1("This is a test"), s2("I like c++");

    s1.show();
    s2.show();
    return 0;
}