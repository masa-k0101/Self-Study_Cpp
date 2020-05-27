#include<iostream>
#include<malloc.h>
#include<cstring>

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
            friend char *get_string(strings *ob);
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
        std::cout << "Freeing p\n";
        free(p);
    }

    void strings::show()
    {
        std::cout << p << " - length: " << len << "\n";
    }

    char *get_string(strings *ob)
    {
        return ob->p;
    }
}

main()
{
    A::strings s1("This is a test");
    char *s;
    s1.show();

    s = get_string(&s1);
    std::cout << "Here is string contained is s1: " << s << "\n";
    return 0;
}