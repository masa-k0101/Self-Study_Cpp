#include<iostream>
#include<string.h>

namespace A
{
    class myclass
    {
            char name[30];
            char address[100];
        public:
            void store(const char *n, const char *a);
            void display();
    };

    void myclass::store(const char *n, const char *a)
        {
            strcpy(name,n);
            strcpy(address,a);
        }
    void myclass::display()
        {
            std::cout << "Name is :" << name << "\n";
            std::cout << "Address is :" << address << "\n";
        }
    }

main()
{
    A::myclass add1;
    add1.store("Masaki","Tochigi");
    add1.display();
    return 0;
}