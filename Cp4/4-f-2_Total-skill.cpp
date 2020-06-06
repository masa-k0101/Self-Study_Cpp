#include<iostream>
#include<cstring>
#include<cstdlib>

namespace A
{
    class string
    {
        private:
            char *p;
            int len;
        public:
            string(const char *s)
                {
                    len = strlen(s);
                    p = new char;
                    if(!p)
                        {
                            std::cout << "Allocation error \n";
                            exit(1);
                        }
                    strcpy(p, s);
                }
            ~string()
                {
                    std::cout <<"Freeing p: \n";
                    delete p;
                }
            void show()
                {
                    std::cout << p << " - length:" << len << "\n";
                }
    };
}

main()
{
    A::string s1("This is a test"), s2("I like c++");

    s1.show();
    s2.show();
    return 0;
}