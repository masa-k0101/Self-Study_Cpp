#include<iostream>
#include<cstring>

namespace A
{
    class string
    {
            char s[80];
        public:
            string()                      { *s='\0'; }
            string(const char *p)         { strcpy(s, p); }
            char *get()                   { return s; }
            string operator+(string s2);
            string operator=(string s2);
            int operator<(string s2);
            int operator>(string s2);
            int operator==(string s2);
    };

    string string::operator+(string s2)
    {
        strcat(s, s2.s);
        return *this;
    }

    string string::operator=(string s2)
    {
        strcpy(s, s2.s);
        return *this;
    }

    int string::operator>(string s2)
    {
        return strcmp(s, s2.s) > 0;
    }

    int string::operator<(string s2)
    {
        return strcmp(s, s2.s) < 0;
    }

    int string::operator==(string s2)
    {
        return strcmp(s, s2.s) == 0;
    }
}

main()
{
    A::string s1("Hello"), s2(" World"), s3;

    s3 = s1 + s2;
    std::cout << "(s1+s2) : " << s3.get() << "\n";

    s3 = s1;
    std::cout << "(s1=o3) : " << s3.get()<< "\n";

    if(s1<s2)   std::cout << "s1 < s2 \n";

    if(s1>s2)   std::cout << "s1 > s2 \n";

    if(s1==s2)   std::cout << "s1 == s2 \n";

    return 0;
}