#include<iostream>

namespace A
{
    class pr2;    //前方参照

    class pr1
    {
            int printing;
        public:
            pr1()   { printing = 0; }
            void set_print(int status)  { printing = status; }
            friend int inuse(pr1 p1, pr2 p2);
    };

    class pr2
    {
            int printing;
        public:
            pr2()   { printing = 0; }
            void set_print(int status)  { printing = status; }
            friend int inuse(pr1 p1, pr2 p2);
    };

    int inuse(pr1 p1, pr2 p2)
    {
        if(p1.printing || p2.printing)  return 1;
        else                            return 0;
    }
}

main()
{
    A::pr1 p1;
    A::pr2 p2;

    if(!inuse(p1, p2))  std::cout << "Printer idle\n";

    std::cout << "Setting p1 to printing...\n";
    p1.set_print(1);
    if(inuse(p1, p2))   std::cout << "Now, printer in use\n";

    std::cout << "Turn off p1...\n";
    p1.set_print(0);
    if(!inuse(p1, p2))   std::cout << "Printer idle\n";

    std::cout << "Turn on p2...\n";
    p2.set_print(1);
    if(inuse(p1, p2))   std::cout << "Now, printer in use\n";

    return 0;
}