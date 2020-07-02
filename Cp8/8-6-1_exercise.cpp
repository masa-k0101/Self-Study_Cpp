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
            string(const char *ptr);
            ~string();
            friend std::ostream &operator<<(std::ostream &stream, string ob);
            friend std::istream &operator>>(std::istream &stream, string &ob);
    };

    string::string(const char *ptr)
    {
        len = strlen(ptr);
        p = new char [len + 1];
        if(!p)
        {
            std::cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, ptr);
    }

    string::~string()
    {
        delete p;
    }

    // 演算子インサータ関数を作る
    std::ostream &operator<<(std::ostream &stream, string ob)
    {
        stream << ob.p;
        return stream;
    }

    std::istream &operator>>(std::istream &stream, string &ob)
    {
        char temp[255];

        stream >> temp;

        if(strlen(temp) >= ob.len)
        {
            delete ob.p;
            ob.p = new char [strlen(temp)+1];
            if(!ob.p)
            {
                std::cout << "Allocation error\n";
                exit(1);
            }
        }
        strcpy(ob.p, temp);

        return stream;
    }
}

main()
{
    A::string s1("This is a test"), s2("I like C++");

    std::cout << s1 << '\n' << s2 << '\n';

    std::cout << "Enter a string: ";
    std::cin >> s1;
    std::cout << s1;

    return 0;
}