#include<iostream>
#include<cstring>
#include<cstdlib>

namespace A
{
    class string
    {
            char *p;
            int len;
        public:
            string(const char *s);
            ~string()
            {
                std::cout << "Freeing " << (unsigned) p << "\n";
                delete p;
            }
            char *get()         { return p; }
            string &operator=(string &ob);
    };

    string::string(const char *s)
    {
        int l;
        l = strlen(s);

        p = new char [l];
        if(!p)
        {
            std::cout << "Allocation error1\n";
            exit(1);
        }
        
        len = l;
        strcpy(p, s);
    }

    // オブジェクトを代入
    string &string::operator=(string &ob)
    {
        // メモリがさらに必要ならば
        if(len < ob.len)
        {
            delete p;
            p = new char [ob.len];
            if(!p)
            {
                std::cout << "Allocation error\n";
                exit(1);
            }
        }
        len = ob.len;
        strcpy(p, ob.p);
        return *this;
    }
}

main()
{
    A::string a("Hello"), b("There");

    std::cout << a.get() << '\n';
    std::cout << b.get() << '\n';

    a = b;

    std::cout << a.get() << '\n';
    std::cout << b.get() << '\n';

    return 0;
}